//vfwscanf_s, vswscanf_s, vwscanf_s

//va_start(), va_end()
//fwscanf_s(), swscanf_s(), wscanf_s()
//vfwprint(), vwprint(), vswprint(), vsnwprintf()_s
//vfscanf_s(), vscanf_s(), vsscanf_s()

#include <stdarg.h>
#include <wchar.h>
int cswscanf_s(const wchar_t* restrict s,
		const wchar_t* restrict format, va_list argptr);
int vwscanf_s(const wchar_t* restrict format, va_list argptr);
#include <stdio.h>  //<stdarg.h> <wchar.h>
int vfwscanf_s(FILE* restrict fp, const wchar_t* restrict format, va_list argptr);

//vfscanf()

