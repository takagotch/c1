//vfwscanf, vswscanf, vwscanf

//va_start(), va_arg(), va_copy(), va_end()
//fwscanf(), swscanf(), wscanf()
//vfwprint(), vswprint(), vwprint()
//

#include <stdarg.h>
#include <wchar.h>
int vswscanf(const wchar_t* restrict s,
		const wchar_t* restrict format, va_list argptr);
int vwscanf(const wchar_t* restrict format, va_list argptr);
#include <stdio.h> //<stdarg.h> <wchar.h>
int vfwscanf(FILE* restrict fp, const wchar_t* restrict format, va_list argptr);

//vfscanf()


