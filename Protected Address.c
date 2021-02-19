/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: Visual C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

#define __thiscall __cdecl // Test compile in C mode

unsigned int _E7();
int _E14();
CDisplacementTable *_E10();
int _E13();
void __cdecl _E11(); // idb
void __thiscall CProtectedAddress::GenerateDisplacement(CProtectedAddress *__hidden this); // idb
unsigned int __thiscall CProtectedAddress::operator=(CProtectedAddress *this, int a2);
unsigned int __thiscall CProtectedAddress::operator=(CProtectedAddress *this, int a2);
unsigned int __thiscall CProtectedAddress::Access(CProtectedAddress *this);
BOOL __thiscall CProtectedAddress::IsUnassigned(CProtectedAddress *this);
CProtectedAddress *__thiscall CProtectedAddress::CProtectedAddress(CProtectedAddress *__hidden this, void *); // idb
CProtectedAddress *__thiscall CProtectedAddress::CProtectedAddress(CProtectedAddress *__hidden this); // idb
void __thiscall CProtectedAddress::~CProtectedAddress(CProtectedAddress *__hidden this); // idb
// unsigned int __thiscall CDisplacementTable::RandomDynamic(CDisplacementTable *__hidden this); idb
// CDisplacementTable *__thiscall CDisplacementTable::CDisplacementTable(CDisplacementTable *__hidden this); idb
// int __cdecl atexit(void (__cdecl *)());
// void __thiscall CDisplacementTable::~CDisplacementTable(CDisplacementTable *__hidden this); idb
// void __thiscall CDisplacementTable::GenerateTable(CDisplacementTable *__hidden this); idb

//-------------------------------------------------------------------------
// Data declarations

char _bFirst__1___4CProtectedAddress__QAEPAXPAX_Z_4_NA = '\x01'; // weak
char _bFirst__1___4CProtectedAddress__QAEPAXK_Z_4_NA = '\x01'; // weak
_UNKNOWN CProtectedAddress::dwDisplacementTable; // weak
char _S12; // weak
unsigned int *CProtectedAddress::dwDisplace; // weak
int dword_18; // weak
int dword_1C; // weak
int dword_20; // weak


//----- (00000034) --------------------------------------------------------
unsigned int _E7()
{
  unsigned int result; // eax

  CProtectedAddress::dwDisplace = (unsigned int *)CDisplacementTable::RandomDynamic((CDisplacementTable *)&CProtectedAddress::dwDisplacementTable);
  dword_18 = CDisplacementTable::RandomDynamic((CDisplacementTable *)&CProtectedAddress::dwDisplacementTable);
  dword_1C = CDisplacementTable::RandomDynamic((CDisplacementTable *)&CProtectedAddress::dwDisplacementTable);
  result = CDisplacementTable::RandomDynamic((CDisplacementTable *)&CProtectedAddress::dwDisplacementTable);
  dword_20 = result;
  return result;
}
// 14: using guessed type unsigned int *CProtectedAddress::dwDisplace;
// 18: using guessed type int dword_18;
// 1C: using guessed type int dword_1C;
// 20: using guessed type int dword_20;

//----- (00000074) --------------------------------------------------------
int _E14()
{
  _E10();
  return _E13();
}

//----- (00000084) --------------------------------------------------------
CDisplacementTable *_E10()
{
  return CDisplacementTable::CDisplacementTable((CDisplacementTable *)&CProtectedAddress::dwDisplacementTable);
}

//----- (00000094) --------------------------------------------------------
int _E13()
{
  return atexit(_E11);
}

//----- (000000A4) --------------------------------------------------------
void __cdecl _E11()
{
  if ( (_S12 & 1) == 0 )
  {
    _S12 |= 1u;
    CDisplacementTable::~CDisplacementTable((CDisplacementTable *)&CProtectedAddress::dwDisplacementTable);
  }
}
// 10: using guessed type char _S12;

//----- (000000C4) --------------------------------------------------------
void __thiscall CProtectedAddress::GenerateDisplacement(CProtectedAddress *this)
{
  unsigned int **v1; // esi

  CDisplacementTable::GenerateTable((CDisplacementTable *)&CProtectedAddress::dwDisplacementTable);
  v1 = &CProtectedAddress::dwDisplace;
  do
    *v1++ = (unsigned int *)CDisplacementTable::RandomDynamic((CDisplacementTable *)&CProtectedAddress::dwDisplacementTable);
  while ( (int)v1 < (int)(&dword_20 + 1) );
}
// 14: using guessed type unsigned int *CProtectedAddress::dwDisplace;
// 20: using guessed type int dword_20;

//----- (000000F4) --------------------------------------------------------
unsigned int __thiscall CProtectedAddress::operator=(CProtectedAddress *this, int a2)
{
  unsigned int result; // eax

  if ( _bFirst__1___4CProtectedAddress__QAEPAXPAX_Z_4_NA )
  {
    *(_DWORD *)this = a2 - ((unsigned int)CProtectedAddress::dwDisplace ^ dword_18);
    result = CProtectedAddress::Access(this);
  }
  else
  {
    _bFirst__1___4CProtectedAddress__QAEPAXPAX_Z_4_NA = 0;
    CProtectedAddress::GenerateDisplacement(this);
    *(_DWORD *)this = a2 - ((unsigned int)CProtectedAddress::dwDisplace ^ dword_18);
    result = CProtectedAddress::Access(this);
  }
  return result;
}
// 0: using guessed type char _bFirst__1___4CProtectedAddress__QAEPAXPAX_Z_4_NA;
// 14: using guessed type unsigned int *CProtectedAddress::dwDisplace;
// 18: using guessed type int dword_18;

//----- (00000154) --------------------------------------------------------
unsigned int __thiscall CProtectedAddress::operator=(CProtectedAddress *this, int a2)
{
  unsigned int result; // eax

  if ( _bFirst__1___4CProtectedAddress__QAEPAXK_Z_4_NA )
  {
    *(_DWORD *)this = a2 - ((unsigned int)CProtectedAddress::dwDisplace ^ dword_18);
    result = CProtectedAddress::Access(this);
  }
  else
  {
    _bFirst__1___4CProtectedAddress__QAEPAXK_Z_4_NA = 0;
    CProtectedAddress::GenerateDisplacement(this);
    *(_DWORD *)this = a2 - ((unsigned int)CProtectedAddress::dwDisplace ^ dword_18);
    result = CProtectedAddress::Access(this);
  }
  return result;
}
// 1: using guessed type char _bFirst__1___4CProtectedAddress__QAEPAXK_Z_4_NA;
// 14: using guessed type unsigned int *CProtectedAddress::dwDisplace;
// 18: using guessed type int dword_18;

//----- (000001C4) --------------------------------------------------------
unsigned int __thiscall CProtectedAddress::Access(CProtectedAddress *this)
{
  return *(_DWORD *)this + ((unsigned int)CProtectedAddress::dwDisplace ^ dword_18);
}
// 14: using guessed type unsigned int *CProtectedAddress::dwDisplace;
// 18: using guessed type int dword_18;

//----- (000001E4) --------------------------------------------------------
BOOL __thiscall CProtectedAddress::IsUnassigned(CProtectedAddress *this)
{
  return *(_DWORD *)this == (dword_1C ^ dword_20);
}
// 1C: using guessed type int dword_1C;
// 20: using guessed type int dword_20;

//----- (00000204) --------------------------------------------------------
CProtectedAddress *__thiscall CProtectedAddress::CProtectedAddress(CProtectedAddress *this, void *a2)
{
  CProtectedAddress *result; // eax

  result = this;
  *(_DWORD *)this = (char *)a2 - ((unsigned int)CProtectedAddress::dwDisplace ^ dword_18);
  return result;
}
// 14: using guessed type unsigned int *CProtectedAddress::dwDisplace;
// 18: using guessed type int dword_18;

//----- (00000224) --------------------------------------------------------
CProtectedAddress *__thiscall CProtectedAddress::CProtectedAddress(CProtectedAddress *this)
{
  CProtectedAddress *result; // eax

  result = this;
  *(_DWORD *)this = dword_1C ^ dword_20;
  return result;
}
// 1C: using guessed type int dword_1C;
// 20: using guessed type int dword_20;

//----- (00000244) --------------------------------------------------------
void __thiscall CProtectedAddress::~CProtectedAddress(CProtectedAddress *this)
{
  *(_DWORD *)this = 0;
}

// nfuncs=20 queued=13 decompiled=13 lumina nreq=0 worse=0 better=0
// ALL OK, 13 function(s) have been successfully decompiled
