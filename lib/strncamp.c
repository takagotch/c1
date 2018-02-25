//strcmp(), wcsncamp(), wcsmp()
//
#include<string.h>
int strcmp(const char* s1, const char* s2, size_t n);

//0 n
//0>= n
//0<= n
//
char* weekdays[] = { "Sunday", "Monday", "Thuesday", "Wednesday",
		     "Thursday", "Friday", "Saturday" };
char date[] = "Thu, 10 Mar 2005 13:44:18 +0100";
for(int dow = 0; dow < (sizeof()/sizeof()); dow++)
{
  if(strncmp(date, weekdays[dow], 3) == 0)
  {
    break;
  }
}

