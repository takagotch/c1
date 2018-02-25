//strtok(), strspn(), strcpn(), strstr(), wcstok()
//
#include<string.h>
char* strtok_s(char* restrict s1, rsize_t* restrict s1max,
		const char* restrict s2, char** restrict ptr);

#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>

char str[] = "Lenno, Jogn: 10/9/1940";
char* ptr = NULL;
const char* firstname = NULL;
const char* birthday = NULL;
const char* lastname = strtok_s(str, ", ", &ptr);
if(lastname != NULL)
{
  firstname = strtok_s(NULL, ": ", &ptr)
}
if(firstname != NULL)
{
  birthday = strtok_s(NULL, "", &ptr)
}
if(birthday != NULL)
{
  printf("%s %s was born on %s.\n", firstname, lastname, birthday);
}

