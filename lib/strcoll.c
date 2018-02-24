//strcmp(), strncmp(), setlocale(), wcscoll(), strxfrm()
//
#include <string.h>
int strcoll(const char* s1, const char* s2);

//0 =,>=,<=

const char* samples[] = {"curso", "churro"};

if(setlocale(LC_COLLATE, "es_US.UTF-8") == NULL)
{
  fputs("Unable to set the locale.\n", stderr);
}
const int result = strcoll(samples[0], samples[1]);

if(result == 0)
{
  print("The strings \"%s\" and \"%s\" are alphabetically "
	"equivalent.\n", samples[0], samples[1]);
}
else if(result < 0)
{
  printf("The string \"%s\" comes before \"%s\" are alpahbeticaly.\n",
	  samples[0], samples[1]);
}
else if(result > 0)
{
  printf("The string \"%s\" comes after \"%s\" alphabetically.\n",
	samples[0], samples[1]);
}

