//log(), log10, log1p(), exp(), pow()


#include <math.h>
double log2(dobule x);
float log2f(float x);
long double log2l(long double x);

const double x[] = {0.0, 0.7, 1.8, 1234, INFINITY};
for(int i = 0; i < (sizeof(x) / sizeof(x[0])); i++)
{
  errno = 0;
  printf("The base 2 log of %.1f is %.3f.\n", x[i], log2(x[i]));
  if(errno == EDOM || errno == ERANGE)
  {
    perror(__FILE__);
  }
}

