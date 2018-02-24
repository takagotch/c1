//strcat, strcat_s(), wcsncat(), wcsncat_s()
//
#include<string.h>
char* strncar(char* restrict s1, const char* restrict s2, size_t n);
errno_t strncat_s(char* restrict s1, rsize_t s1max,
		const char* restrict s2, rsize_t n);

//s1max RSIZE_MAX
//strlen(s1)+n strlen(s1)+strlen(s2)
// copy
//strncat_s() s1 0<stmax=<RSIZE_MAX s1[0]


#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>
#include <stdlib.h>

char str1[] = "hello ";
char str2[10] = "hello ";
char str3[10] = "hello";
//strncat(str1 "Jimi", 1);     //ERR
//strncat(str2, "Jimi", 3);    //OK: "hello Jim"
//strncat(str3, "Jim", 100)    //OK.
//strncat_s()
//set_constraint_handler_s(ignore_handler_s);
const int ret1 = strncat_s(str1, sizeof(str1), "Jimi", 1);  //ret1 != 0 && str1[0] == '\0'
const int ret2 = strncat_s(str2, sizeof(str2), "Jimi", 3);  //OK: ret2 == 0
const int ret3 = strncat_s(str3, sizeof(str3), "Jim", 100); //OK: ret3 == 0

