//strtol(), strtod(), strtof(), strtold()
//wcstol(), wcstoul()
//strtoimax(), strtoumax(), wcstoimax(), wcstoumax()
//
#include <stdlib.h>
unsigned long strtoul(const char* restrict s, char** restrict endptr, int base);
unsigned long long strtoull(const char* restrict s,
		char** restrict endptr, int base);

const char dotted[] = "172.16.2.10";
const char* ptr = dotted;
char* nextdot = NULL;
unsigned long dest = oUL;
for(int i = 0; i < 4; i++)
{
  dest <<= 8;
  dest += strtoul(ptr, &nextdot, 10);
  ptr = nextdot + 1;
}


