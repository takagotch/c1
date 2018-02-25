//vfwprintf_s, vswprintf_s, vsnwprintf_s, vwprintf_s

//va_start(), va_end()
//fwprintf_s(), wprintf_s(), swprintf(), snwprintf_s()
//vfprintf_s(), vprintf_s(), vsprintf_s(), vsprintf_s()
//


#include <stdarg.h>
#include <wchar.h>
int vswprintf_s(wchar_t* restrict s, rsize_t n,
		const wchar_t* restrict format, va_list argptr);
int vsnwprintf_s(wchar_t* restrict s, rsize_t n,
		const wchar_t* restrict format, va_list angptr);
int vwprintf_s(const wchar_t* restrict format, va_list argptr);
int vfwprintf_s(FILE* restrict fp, const wchar_t* restrict format, va_list argptr);

//vfprintf()

