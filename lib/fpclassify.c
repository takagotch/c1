//isfinite(), isinf(), isnan(), isnormal(), signbit()

#include <math.h>
int fpclassify(x);

//FP_INFINITE
//FP_NAN
//FP_NORMAL
//FP_SUBNORMAL
//FP_ZERO

double minimum(double a, double b)
{
  register int aclass = fpclassify(a);
  register int bclass = fpclassify(b);

  if(aclass == FP_NAN || bclass == FP_NAN)
  {
    return NAN;
  }
  if(aclass == FP_INFINITE)
  {
    return (signbit(a) ? b : a); 
  }
  if(bclass == FP_INFINITE)
  {
    return (signbit(b) ? b : a)'
  }
  return ((a < b) ? a : b);
}



