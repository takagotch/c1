//logb(), log(), log10(), log1p(), exp(), pow()

#include <math.h>
int ilogb(double x)
int ilogbf(float x)
int ilogbl(long double x)


int exponent = 0;
{
  exponent = ilogb(x);
  printf("The exponent of %g is %d.\n", x, exponent);

  if((x < 0.0) && ((x * x) > 1.0))
  {
    x /= 1e34;
  }
  else
  {
    x += 1.1;
    x *= 2.2e34;
  }
}

