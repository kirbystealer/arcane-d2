#ifndef _DLL_PATCHES_H
#define _DLL_PATCHES_H

#include <windows.h>

extern "C" volatile int D2CommonMazeIncrement __asm__ ("MazeIncrement");
extern "C" volatile void setIncrement(int n);

DWORD PatchDlls();


#endif
