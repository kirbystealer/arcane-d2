// #define _DEFINE_VARS

#include <stdio.h>
#include <stdlib.h>

#include "log.h"
#include "offset.h"
#include "dll_patches.h"

unsigned char * bin_to_strhex(const unsigned char *bin, unsigned int binsz, unsigned char **result){
  unsigned char hex_str[]= "0123456789ABCDEF";
  unsigned int  i;

  if (!(*result = (unsigned char *)malloc(binsz * 2 + 1)))
    return (NULL);

  (*result)[binsz * 2] = 0;

  if (!binsz)
    return (NULL);

  for (i = 0; i < binsz; i++)
    {
      (*result)[i * 2 + 0] = hex_str[(bin[i] >> 4) & 0x0F];
      (*result)[i * 2 + 1] = hex_str[(bin[i]     ) & 0x0F];
    }
  return (*result);
}

__declspec(dllexport) void Patch(char* dst, char* src, int size){
    DWORD oldprotect = VirtualProtect(dst, size, PAGE_EXECUTE_READWRITE, &oldprotect);
    memcpy(dst, src, size);
    VirtualProtect(dst, size, oldprotect, &oldprotect);
}

__declspec(dllexport) char *SetJumpAtLocation(void *fromAddress, void *toAddress, unsigned int padding){
    log_trace("Dll:Patching: Placing call", lk_ui("fromAddress", (unsigned int)fromAddress), lk_ui("toAddress", (unsigned int)toAddress));

    unsigned int backupSize = 1 + sizeof(int) + padding;
    char *backupBytes = (char*)malloc(backupSize);
    memcpy(backupBytes, fromAddress, backupSize);

    unsigned char* result;
    bin_to_strhex((unsigned char *)backupBytes, sizeof(backupBytes), &result);
    log_trace("Dll:Patching: backed up bytes", lk_s("backup", (const char*)result));

    int addressOffset = (int) ((unsigned long) toAddress - ((unsigned long) fromAddress + 1 + sizeof(int)));
    DWORD oldprotect;
    VirtualProtect(fromAddress, backupSize, PAGE_EXECUTE_READWRITE, &oldprotect);
    memset(fromAddress, 0xE8, 1);
    memcpy((void *) (((unsigned long) fromAddress) + 1), &addressOffset, sizeof(int)); // Can use &addressOffset because memcpy will implicitly convert to (void*)
    for (int i = 0; i < padding; i++){
        memset((void *) (((unsigned long) fromAddress) + 1 + sizeof(int) + i), 0x90, 1);
    }

    memcpy(backupBytes, fromAddress, backupSize);
    bin_to_strhex((unsigned char *)backupBytes, sizeof(backupBytes), &result);
    log_trace("Dll:Patching: patched bytes as ", lk_s("patch", (const char*)result));

    return backupBytes;
}

__declspec(dllexport) void UnsetJumpAtLocation(void *fromLocation, char *backupBytes){
    // VirtualProtect / mprotect here
    memcpy(fromLocation, backupBytes, sizeof(backupBytes));
    free(backupBytes);
}

extern "C" volatile int D2CommonMazeIncrement = 15;

extern "C" __declspec(dllexport) __attribute__((naked)) void d2CommonCodeCave(){
    // If EDI == 1
    // Then 
    // printf("Value of EDI, %u\n", EDI);
//je 6FD5EB25
    __asm__ volatile(
        "mov [ecx+0x1C4],eax\n"         // When EDI == 1, eax is mapRng[62]
        "push ebx\n"
        "push ecx\n"
        "mov ebx, edi\n"
        "dec ebx\n"
        "test ebx, ebx\n"
        "jne outro\n"
        "mov ecx, MazeIncrement\n"
        "loop:\n"
            "test ecx, ecx\n"
            "je outro\n"
            "inc eax\n"
            "dec ecx\n"
            "jmp loop\n"
        "outro:\n"
            "pop ecx\n"
            "pop ebx\n"

            "ret"
    );
}


__declspec(dllexport) void PatchD2Common(){
    try {
        DWORD offset = GetDllOffset("D2Common.DLL", 0);
        void *jumpAddress = (void*) ((unsigned long) offset + 0xE9A1);


        const char *backupBytes = SetJumpAtLocation(jumpAddress, (void*) d2CommonCodeCave, 1);

        // unsigned char memory[50];
        // memcpy(&memory, (void*)(offset + 0xE9A1), sizeof(memory));

        // unsigned char* result;
        // bin_to_strhex((unsigned char *)memory, sizeof(memory), &result);
        // log_debug("Dll:Patching:", lk_s("bytes", (const char*)result));

        // unsigned char override[] = { 0xE9, 0x2E, 0x12, 0x13, 0x02, 0x90};

        // Patch((char*)(offset + 0xE9A1),   "\xE9\x2E\x12\x13\x02\x90", 6);

        // memcpy(&memory, (void*)(offset + 0xE9A1), sizeof(memory));
        // bin_to_strhex((unsigned char *)memory, sizeof(memory), &result);
        // log_debug("Dll:Patching:", lk_s("bytes", (const char*)result));

         // __asm(
         //    ".intel_syntax noprefix\n"
         //    "pusha\n"
         //    "popa\n"
         //    "popa\n"
         //    "popa\n");




        // free(result);

        log_debug("Dll:Patching:Success", lk_s("dll", "D2Common.dll"), lk_i("offset", 0));
    } catch (...) {
        log_error("Dll:Patching:Failed", lk_s("dll", "D2Common.dll"), lk_i("offset", 0));
    }
    
}

__declspec(dllexport) DWORD PatchDlls() { 
    PatchD2Common();

    return 0;
}

