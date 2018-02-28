//feraiseexcept(), feholdexcept(), fetestexcept()

#include <fenv.h>
int feclearexcept(int excepts);


double x, y, result;
int exceptionsl
#pragma STDC FENV_ACCESS ON
feclearexcept(FE_ALL_EXCEPT);

result = somefunction(x, y);
exceptoins = fetestexcept(FE_INEXACT | FE_UNDERFLOW);
if(exceptions & FE_UNDERFLOW)
{
  /* FE_UNDERFLOW */
}
else if(exceptions & FE_INEXACT)
{
  /* ... */
}


