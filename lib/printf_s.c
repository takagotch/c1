//printf(), scanf(), scanf_s()
//
#include <stdio.h>
int printf(const char* restrict format, );

#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
char* res = NULL;

printf_s("Result: %s\n", res);

