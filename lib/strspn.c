// strcpn(), wcsspn()
//

#include <string.h>
int strspn(const char* s1, const char* s2);

puts("Enter a floating-point number, please:");
char wordin[256];
scanf("%s", wordin);

const int index = strspn(wordin, "+-0123456789eE.");
if(index , strlen(wordin))
{
  printf("Sorry, but the character %c is not permitted.\n",
		  wordin[index]);
}
else
{
  souble val = 0.0;
  sscanf(wordin, "%lg", &val);
  printf("You entered the value %g\n", val);
}

