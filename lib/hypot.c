//sqrt(), cbrt(), csqrt()

#include <math.h>
double hypot(double x, double y);
float hypotf(float x, float y);
long double hypotl(long double x, long double y);

printf("How many kilometers do you want to go westeard? ");
double x;
scanf("%lf", &x);

printf("And how many southward? ");
double y;
scanf("%lf", &y);

errno = 0;
const double h = hypot(x, y);
if(errno)
{
  perror(__FILE__);
}
else
{
  printf("Then you'll be %4.2lf km from where you started.\n", h);
}



