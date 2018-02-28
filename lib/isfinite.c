//fpclassify(), isinf(), isnan(), isnormal(), signbit()

#include <math.h>
int isfinite(float x);
int isfinite(double x);
int isfinite(long double x);

{
  va_list argptr;
  va_start(argptr, n);
  double sum = 0.0;
  while(n--)
  {
    const double next = va_arg(argptr, double);
    sum += next;
    if(isfinite(sum) == 0)
    {
      break;
    }
  }
  va_end(argptr);
  return sum;
}


