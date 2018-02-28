//getenv(), set_constraint_handler_s(), system()

#include <stdlib.h>
errno_t getenv_s(size_t* restrict len, char* restrict value, rsize_t maxsize,
		const char* restrict name););
//getenv_s(), getenv()
//len string num pointer
//maxsize  value char


#define __STDC_WANT_LIB_EXT1__ 1
#include <stdlib.h>

size_t len = 0;
char envStr[512] = "";
if(getenv_s(&len, envStr, sizeof(envStr), "PATH") == 0)
{
  printf("PATH variable (%zu characters): \n%s\n", len, envStr);
}
else if (len > 0)
{
  printf("The PATH variable (%zu characters) is more than"
	"%zu bytes long.\n", len, sizeof(envStr));
}
else
{
  printf("PATH variable not found.\n");
}



