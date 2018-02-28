//fpclassify(), isfinite(), isinf(), isnan(), signbit()

#include <math.h>
int isnormal(float x);
int isnormal(double x);
int isnormal(long double x);

double maximum(double a, double b)
{
  if(isnormal(a) && isnormal(b))
  {
    return (a >= b) ? a : b'
  }
  else if(isnan(a) || isnan(b))
  {
    /* ... */
  }
}


