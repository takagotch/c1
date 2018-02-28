//fpclassify(), isfinite(), isinf(), isnormal(), signbit()

#include <math.h>
int isnan(float x);
int isnan(double x);
int isnan(long double x);

double dMax(double a, double b)
{
  if(isnan(a)){ return a; }
  if(isnan(b)){ return b; }

  if(isnan(a) && signbit(a)){ return b; }
  if(isinf(b) && signbit(b)){ return a; }
  return(a > b ? a : b);
}


