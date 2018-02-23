//strchr(), strpbrk(), strstr()
//wcschr(), wcsrchr()
//
#include <string.h>
char* strrchr(const char* s, int c);

const char* mybasename = strchr(argv[0], '/');
if(mybasename != NULL)
{
  mybasename++;
}
else
{
  mybasename = argv[0];
}
printf("This program was invoked as %s.\n", mybasename);


