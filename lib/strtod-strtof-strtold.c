//atof()
//wcstof(), wcstod(), wcstold()
//strtol(), strtoul(), strtoimax()
//
#include <stdlib.h>
double strtod(const char* restrict s, char** restrict endptr);
float strtof(const char* restrict s, char** restrict endptr);
long double strtold(cons char* restrict s, char** restrict endptr);

puts("Enter some floating-point numbers, please:");
char in[1024];
scanf("%[^\n]", in);

puts("Here are the values you entered:");
char* this2 = in;
char* next = in;
while(1)
{
  const double val = strtod(this2, &next);
  if(next == this2)
  {
    break;
  }
  printf("\t%g\n", val);
  this2 = next;
}
puts("Done.");

