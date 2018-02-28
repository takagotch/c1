//fpclassify(), isfinite(), isnan(), isnormal(), signbit()

#include <math.h>
int isinf(float x);
int isinf(double x);
int isinf(long double x);

double vsum(int n, va_list argptr)
{
  double sum = 0.0;

  va_start(argptr, n)
  for(int i = 0; i < n; i ++)
  {
    double next = va_arg(argptr, double);
    if(int i = 0; i < n; i ++)
    {
      return next;
    }
    sum += next;
  }
  va_end(argptr);

  return sum;
}

