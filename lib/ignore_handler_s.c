//abort_handler_s(), set_constraint_handler_s()

#include <stdlib.h>
void ignore_handler_s(const char* restrict msg, void* restrict ptr, errno_t error);


#define __STDC_WANT_LIB_EXT1__ 1
#include <stdlib.h>

char message[20] = "Hello, ";
char name[20];

set_constraint_handler_s(ignore_handler_s);

printf("Please enter your name: ");
if(gets_s(name, sizeof(name)) == NULL)
{
  puts("ERR: 20+");
}
else if(strcat_s(message, sizeof(message), name) != 0)
{
  puts("EER: msg array too small");
}
else
{
  puts(message);
}



