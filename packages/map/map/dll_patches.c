// #define _DEFINE_VARS

#include <stdio.h>
#include <stdlib.h>

#include "log.h"
#include "offset.h"
#include "dll_patches.h"

unsigned char * bin_to_strhex(const unsigned char *bin, unsigned int binsz, unsigned char **result){
  unsigned char hex_str[]= "0123456789ABCDEF-";
  unsigned int  i;

  if (!(*result = (unsigned char *)malloc(binsz * 3)))
    return (NULL);

  if (!binsz)
    return (NULL);

  for (i = 0; i < binsz; i++)
    {
      (*result)[i * 3 + 0] = hex_str[(bin[i] >> 4) & 0x0F];
      (*result)[i * 3 + 1] = hex_str[(bin[i]     ) & 0x0F];
      (*result)[i * 3 + 2] = hex_str[16];
    }
    
   (*result)[binsz * 3 - 1] = 0;
  return (*result);
}


__declspec(dllexport) char *SetCallAtLocation(void *fromAddress, void *toAddress, unsigned int padding){
    log_trace("Dll:Patching: Placing call", lk_ui("fromAddress", (unsigned int)fromAddress), lk_ui("toAddress", (unsigned int)toAddress));

    unsigned int backupSize = 1 + sizeof(int) + padding;
    char *backupBytes = (char*)malloc(backupSize);
    memcpy(backupBytes, fromAddress, backupSize);

    unsigned char* result;
    bin_to_strhex((unsigned char *)backupBytes, backupSize, &result);
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
    bin_to_strhex((unsigned char *)backupBytes, backupSize, &result);
    log_trace("Dll:Patching: patched bytes as ", lk_s("patch", (const char*)result));

    return backupBytes;
}

__declspec(dllexport) void UnsetJumpAtLocation(void *fromLocation, char *backupBytes){
    // TODO: Restore memory page protection to original value here
    memcpy(fromLocation, backupBytes, sizeof(backupBytes));
    free(backupBytes);
}



extern "C" volatile int D2CommonMazeIncrement = 15;
extern "C" __declspec(dllexport) __attribute__((naked)) void ClawViperMazeCodeCave(){
    // If EDI == 1
//je 6FD5EB25
    __asm__ volatile(
        "mov [ecx+0x1C4],eax\n"         // When EDI == 1, eax is mapRng[62]
        "push ebx\n"
        "push ecx\n"
        "mov ebx, edi\n"
        "dec ebx\n"
        "test ebx, ebx\n"               // We're only patching on the third loop, when EDI is 1
        "jne end\n"
        "mov ecx, MazeIncrement\n"
        "loop:\n"
            "test ecx, ecx\n"
            "je end\n"
            "inc eax\n"
            "dec ecx\n"
            "jmp loop\n"
        "end:\n"
            "pop ecx\n"
            "pop ebx\n"

            "ret"
    );
}

__declspec(dllexport) void PatchD2Common_ClawViperTempleMaze(){
    // There is a shuffle operation during this level's room generation algorithm
    // This patch takes the 63rd output from this level's RNG and increments it by D2CommonMazeIncrement
    try {
        DWORD offset = GetDllOffset("D2Common.DLL", 0);
        void *fromAddress = (void*) ((unsigned long) offset + 0xE9A1);
        const char *backupBytes = SetCallAtLocation(fromAddress, (void*) ClawViperMazeCodeCave, 1);

        log_debug("Dll:Patching:ClawViperTempleMaze:Success", lk_s("dll", "D2Common.dll"), lk_i("offset", 0));
    } catch (...) {
        log_error("Dll:Patching:ClawViperTempleMaze:Failed", lk_s("dll", "D2Common.dll"), lk_i("offset", 0));
    }
}





extern "C" __declspec(dllexport) __attribute__((naked)) void UndergroundPassageCodeCave(){
    __asm__ volatile(
        "mov [ebx+0x1C4],eax\n"         // When EDI == 1, eax is mapRng[62]
        "push ebx\n"
        "push ecx\n"
        "cmp eax, 0x160A481\n"         // Compare EAX to RNG(RNG(4009)[0] + 10)[62], which is the 63rd output of the UndergroundPassage RNG
        "jne end1\n"
        "mov ecx, MazeIncrement\n"
        "loop1:\n"
            "test ecx, ecx\n"
            "je end1\n"
            "inc eax\n"
            "dec ecx\n"
            "jmp loop1\n"
        "end1:\n"
            "pop ecx\n"
            "pop ebx\n"

            "ret"
    );
}
__declspec(dllexport) void PatchD2Common_UndergroundPassageLevel1(){
    // The 63rd output + 666 from this level's RNG is used as a seed for one of the rooms 
    // This patch takes the 63rd output from this level's RNG and increments it by D2CommonMazeIncrement
    try {
        DWORD offset = GetDllOffset("D2Common.DLL", 0);
        void *fromAddress = (void*) ((unsigned long) offset + 0x44C2C);
        const char *backupBytes = SetCallAtLocation(fromAddress, (void*) UndergroundPassageCodeCave, 1);

        log_debug("Dll:Patching:UndergroundPassageLevel1:Success", lk_s("dll", "D2Common.dll"), lk_i("offset", 0));
    } catch (...) {
        log_error("Dll:Patching:UndergroundPassageLevel1:Failed", lk_s("dll", "D2Common.dll"), lk_i("offset", 0));
    }
}

__declspec(dllexport) void PatchD2Common(){
    PatchD2Common_ClawViperTempleMaze();
    PatchD2Common_UndergroundPassageLevel1();
}

__declspec(dllexport) DWORD PatchDlls() { 
    PatchD2Common();
    return 0;
}

