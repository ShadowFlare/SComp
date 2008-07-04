// wintypes.h - Windows data types
// (when not compiling for Windows)
// License information for this code is in license.txt

#ifndef WIN_TYPES_INCLUDED
#define WIN_TYPES_INCLUDED

#define WINAPI
#define CDECL
#define __fastcall

#define CONST const

typedef void VOID;
typedef void *LPVOID;
typedef CONST void *LPCVOID;
typedef const char *LPCSTR;
typedef unsigned char BYTE;
typedef BYTE *LPBYTE;
typedef unsigned short WORD;
typedef WORD *LPWORD;
typedef short SHORT;
typedef unsigned long DWORD;
typedef DWORD *LPDWORD;
typedef long LONG;
typedef LONG *LPLONG;

typedef int BOOL;
typedef int (WINAPI *FARPROC)();

#define FALSE 0
#define TRUE 1

#define ERROR_NOT_ENOUGH_MEMORY          8L
#define ERROR_INVALID_PARAMETER          87L

#endif

