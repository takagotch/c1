//strncpy(), memcpy(), memove(), wcspy(), wcsnpy(), wmemcpy(), wmemmove()
//__STDC_LIB_EXT1__
//
#include <string.h>
char* strcpy(char* restrict dest, count char* restrict src);
errno_t strcpy_s(char* restrict dest, rsize_t destmax,
		const char* restrict src);

//src, dest 0<destmax=<RSIZE_MAX
//src<destmax

struct guest{
  char name[64];
  int age;
  _Bool male;
  _Bool smoking;
  _Bool discount;
};
struct guest this = {""};

printf("Last name: ");
int result = scanf("%[^\n]", this.name);
if(result < 1)
{
  strcpy(this.name, "[not available]");
  //|| strcpy_s("Name: %s\n", this.name);
}
printf("Name: %s\n", this.name);

