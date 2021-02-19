/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: Visual C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

#define __thiscall __cdecl // Test compile in C mode

void __thiscall CProtectedString::DecryptString(CProtectedString *__hidden this, char *, int, unsigned int, unsigned int); // idb
char *__thiscall CProtectedString::Str(CProtectedString *__hidden this); // idb
CProtectedString *__thiscall CProtectedString::CProtectedString(CProtectedString *__hidden this, char *, int, unsigned int, unsigned int); // idb
void __thiscall CProtectedString::~CProtectedString(CProtectedString *__hidden this); // idb
// void *__cdecl operator new(unsigned int); idb
// void __cdecl operator delete(void *); idb


//----- (00000000) --------------------------------------------------------
void __thiscall CProtectedString::DecryptString(CProtectedString *this, char *a2, int a3, unsigned int a4, unsigned int a5)
{
  int v6; // eax
  char v7; // cl
  char v8; // dl

  *(_DWORD *)this = operator new(a3 + 1);
  v6 = 0;
  if ( a3 <= 0 )
  {
    *(_BYTE *)(*(_DWORD *)this + a3) = 0;
  }
  else
  {
    v7 = a4;
    do
    {
      *(_BYTE *)(*(_DWORD *)this + v6) = v7 ^ a2[v6 - a5];
      v8 = v7 + (v6++ ^ 0x2A);
      v7 = v8;
    }
    while ( v6 < a3 );
    *(_BYTE *)(*(_DWORD *)this + a3) = 0;
  }
}

//----- (00000070) --------------------------------------------------------
char *__thiscall CProtectedString::Str(CProtectedString *this)
{
  return *(char **)this;
}

//----- (00000080) --------------------------------------------------------
CProtectedString *__thiscall CProtectedString::CProtectedString(CProtectedString *this, char *a2, int a3, unsigned int a4, unsigned int a5)
{
  *(_DWORD *)this = 0;
  CProtectedString::DecryptString(this, a2, a3, a4, a5);
  return this;
}

//----- (000000B0) --------------------------------------------------------
void __thiscall CProtectedString::~CProtectedString(CProtectedString *this)
{
  if ( *(_DWORD *)this )
  {
    operator delete(*(void **)this);
    *(_DWORD *)this = 0;
  }
}

// nfuncs=6 queued=4 decompiled=4 lumina nreq=0 worse=0 better=0
// ALL OK, 4 function(s) have been successfully decompiled
