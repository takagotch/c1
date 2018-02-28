//isless, islessequal, islessgreater

//isgreater(), isgreaterequal(), isunorderd()


#include <math.h>
int isless(x, y);
int islessequal(x, y);
int islessfreater(x, y);

double minimun(double a, double b)
{
  if(islessgreater(a, b))
  {
    return (idless(a, b) ? a : b);
  }
  if(a == b)
  {
    return a;
  }
  feraiseexcept(FE_INVALID);
  return NAN;
}


