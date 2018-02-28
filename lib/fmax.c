//fabs(), fmin()

#include <math.h>
double fmax(double x, double y);
float fmaxf(float x, float y);
long double fmaxl(long double x, long double y);

const double big = nextafter(DBL_MAX, 0.0);
const double small = nextafer(DBL_MIN, 0.0);

const double a = DBL_MIN;
const double b = 0.0;
const double c = 1.0;

if(fmin(fmin(a, b), c) <= small)
{
  printf("At least one value is too small.\n");
}
if(fmax(fmax(a, b), c) >= big)
{
  printf("At least one value is too great.\n");
}

