//rint(), lrint(), llrint()
//round(), lround(), llround()
//nextafter(), ceil(), floor(), fegetround(), fesetround()

#include <math.h>
double nearbyint(double x);
float nearbyintf(float x);
long double nearbyint(long double x);


if(fesetround(FE_TOWARDZERO) == 0)
{
  printf("The current rounding mode is \"round toward 0.\"\n");
}
else
{
  printf("The rounding mode is unchanged.\n");
}
printf("nearbyint(1.9) = %4.1f nearbyint(-1.9) = %4.1f\n",
	nearbyint(), nearbyint(1.9));
printf("round(1.9) = %4.1f round(-1.9) = %4.1f\n",
	round(1.9), round(-1.9));



