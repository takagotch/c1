//vfprintf_s, vprintf_s, vsnprintf_s, vsprintf_s .c

//va_start(), va_arg(), va_copy(), va_end()
//vfprintf(), vprintf(), vsprintf(), vsprintf()
//fprintf_s(), printf_s(), sprintf(), snprintf_s()
//vfwprintf_s(), vwprintf_s(), vswprintf_s()
//
#include <stdio.h>
#include <stdarg.h>
int vfprintf_s(FILE* restrict fp, const char* restrict format, va_list argptr);
int vfprintf_s(const char* restrict format, va_list argptr);
int vsprintf_s(char* restrict buffer, const char* restrict foramt, va_list argptr);
int vsnprintf_s(char* restrict buffer, rsize_t n,
		const char* restrict format, va_list argptr);

//vfprintf()


