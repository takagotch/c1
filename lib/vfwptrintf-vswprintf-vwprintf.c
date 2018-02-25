//vfwprintf, vswprintf, v2printf

//va_start(), va_end()
//wprintf(), fwprintf(), swprintf()
//vfwscanf(), vswscanf(), vwscanf()
//__STDC_LIB_EXT1__
#include <stdarg.h>
#include <wchar.h>
int cswprintf(wchar_t* restrict s, size_t n,
		const wchar_t* restrict format, va_list argptr);
int vwprintf(const wchar_t* restrict format, va_list argptr);
#include <stdio.h>
int vfwprintf(FILE* fp, const wchar_t* restrict format, va_list argptr);


//vfprintf()


