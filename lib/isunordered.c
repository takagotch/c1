//isgreater(), isgreaterequal(), isless(), islessequal(), islessgreater()

#include <math.h>
int isunordered(x, y)

double maximum(double a, double b)
{
  if(isinf(a)) //+Inf -Inf
  {
    return (signbit(a) ? b : a);
  }
  if(isinf(b))
  {
    return (signbit(b) ? a : b);
  }
  if(isunordered(a, b))
  {
    feraiseexcept(FE_INVALID);
    return NAN;
  }
  return (a > b ? a : b);
}

