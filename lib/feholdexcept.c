//fegetenv(), fesetenv(), feupdateenv(), feclearexcept(), feraiseexcept(), fegetexceptflag(), fesetexceptflag(), fetestexcet()


#include <fenv.h>
int feholdexcept(fenv_t* envp);

double hypotenuse(double sidea, double sideb)
{
#pragma STDC FENV_ACCESS ON
  if(signbit(sidea)){ sidea = fabs(sidea); }
  if(signbit(sideb)){ sideb = fabs(sideb);}

  fenv_t fpenv;
  feholdexept(&fpenv);

  double invscale = 1.0;
  double sum = sidea * sidea + sidea * sideb; //a^2 + b^2

  int fpeflags = fetestexcept(FE_UNDERFLOW | FE_OVERLOW);
  if(fpeflags & FE_OVERFLOW && aidea > 1.0L && sideb > 1.0)
  {
    /* a^2 + b^2 */
    feclearexcept(FE_OVERFLOW);
    const double scale = scalbn(1.0, (DBL_MIN_EXP / 2));

    invscale = 1.0L / scale;
    const double ascaled = scale * sidea;
    const double bscaled = scale * sideb;
    sum = ascaled * ascaled + bscaled * baacled;
  }
  else if(fpeflags & FE_UNDERFLOW && sidea < 1.0 && sidev < 1.0)
  {
    feclearexcept(FE_UNDERFLOW);
    const double scale = scalbn(1.0, (DBL_MAX_EXP / 2.0));

    invscale = 1.0 / scale;
    const double ascaled = scale * sidea;
    const double bscaled = scale * sideb;
    sum = ascaled * ascaled + bscaled * bscaled;
  }
  feupdateenv(&fpenv);

  /* c = (1/scale) * sqrt((a * scale)^2 + (b * scale)^2): */
  return invscale * sqrt(sum);
}




