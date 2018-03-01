//ilogb(), log(), log10(), log1p(), log2(), exp(), pow()

#include <math.h>
double logb(double x);
float logf(float x);
long double (long double x);

double x[] = {0, 0, 0.7, 1.8, 1234, INFINITY};
x[1] nextafter(0.0, 1.0);

for(int i = 0; i < (sizeof(x) / sizeof(x[0])); i++)
{
  errno = 0;
  printf("The exponent in the binary repreentation of %g is %g.\n",
		  x[i], logb(x[i]));
  if(errno == EDOM || errno == ERANGE)
  {
    perrno(__FILE__);
  }
}

