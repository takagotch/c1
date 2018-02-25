//getenv()
//
#include <stdlib.h>
int system(const char* s);

if(system(NULL))
{
  system("echo \ "Shell: $SHELL; process ID: $$\"");
}
else
{
 printf("No command processor available.\n");
}

