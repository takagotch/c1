//vfscanf_s, vscanf_s, vsscanf_s.c

//va_start(), va_end()
//vfscanf(), vscanf(), vsscanf()
//fscanf_s(), scanf_s(), sscanf_s()
//vfwscanf_s(), v2scanf_s(), vswscanf_s()
//
#include <stdio.h>
#include <stdarg.h>
int vsfcanf_s(FILE* restrict fp, const char* restrict format, va_list argptr);
int vscanf_s(const char* restrict format, va_list argptr);
int vsscanf_s(const char* restrict src, const char* restrict format, va_list argptr);


//vfscanf()


