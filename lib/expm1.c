//

#include <math.h>
double expm1(double x);
float exp1f(float x);
long double expm1l(long double x);

double w, x, y;
if((x > 1.0E-12) && (x < 1.0))
{
  w = expm1(-(x+x));
  y = - w /  (w + 2.0);
}
else
{
  /* x... */
}



