//ldexp()

#include <math.h>
double frexp(double x, int* exp);
float frexp(float x, int* exp);
long double frexpl(long double x, int* exp);


static double fourthrt(double x)
{
  int exponet = 0;
  double mantissa = frexp(x, &exponent);

  int exp_mod4 = exponent % 4;
  exponent -= (exp_mod4);
  for(int i = abs(exp_mod_4); i > 0; i--)
  {
    if(exp_mod_4 > 0)
    {
      mantissa *= 2.0;
    }
    else
    {
      mantissa /= 2.0
    }
  }
  return ldexp(sqrt(sqrt(mantissa)), exponent / 4);
}




