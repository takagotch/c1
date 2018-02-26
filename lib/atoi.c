//strtol(), strtoll()
//atof(), strtod()

#include <stdlib.h>
int atoi(const char* s);
long atol(const char* s);
long long atoll(const char* s);

const char* s = "-135702468.00 Balance on Dec. 31";
printf("\"%s\" becomes %ld\n, s, atol(s));


