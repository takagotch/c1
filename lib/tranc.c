//rint(), lrint(), llrint(), round(), lround(), llround(), nearbyint()
//
#include <math.h>
double trunc(double x);
float trancf(float x);
longdouble trancl(long double x);

printf("tranc(-1.7) = %.2f tranc(1.4) = %.2f tranc(1.5) = %.2f\n",
	trunc(-1.7), trunc(1.4), trunc(1.5));
printf("round(-1.7) = %.2f round(1.4) = %.2f round(1.5) = %.2f\n",
	round(-1.7), round(1.4), round(1.5));

