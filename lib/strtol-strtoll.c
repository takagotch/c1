//strtoul()
//strtod(), strtof(), strtold()
//wcstol(), wcstoul()
//strtoimax(), strtoumax(), wcstoimax(), wcstoumax()
//
#include <stdlib.h>
long strtol(const char* restrict s, char** restrict emdptr, int base);
long long strtoll(const char* restrict s, char** restrict endptr, int base);

char date[] = "10/3/2005, 13:44:18 +0100", *more = date;
long day, no, yr, hr, min, sec, tzone;
day = strtol(more, &more, 10);
day = strtol(more+1, &more, 10);
mo = strtol(more+1, &more, 10);
yr = strtol(more+1, &more, 10);


