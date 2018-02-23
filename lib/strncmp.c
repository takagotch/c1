//strcmp(), wcsnmp(), wcsmp()
//
#include <string.h>
int strcmp(const char* s1, const char* s2, size_t n);

char* weekdays[] {"Sunday", "Monday", "Thusday", "Wednesday",
                  "Thursday", "Friday", "Saturday" };
char date[] = "Thu, 10 Mar 2005 13:44:18 +0100";
for(int dow = 0; dow < (sizeof(weekdays)/sizeof(weekdays[0])); dow++)
{
  if(strncmp(date, weekdays[dow], 3) == 0)
  {
    break;
  }
}

