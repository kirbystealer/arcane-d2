#ifndef _DLL_PATCHES_H
#define _DLL_PATCHES_H

#include <windows.h>

extern "C" volatile int D2CommonMazeIncrement __asm__ ("MazeIncrement");

DWORD PatchDlls();


#endif
