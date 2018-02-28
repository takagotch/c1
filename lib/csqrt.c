//cexp(), clog(), cpow(), sqrt()

#include <complex.h>
double complex csqrt(double complex z);
float complex csqrtf(float complex z);
long double complex csqrtl(long double complex z);


const double complex z = 1.35 - 2.46 * I;
const double complex c = csqrt(z);
const double complex d = c * c;

printf("If the square root of %.2f %+.2f X I equals %.2f %+.2f X I,\n",
	creal(z), cimag(z), creal(c), cimag(c));
printf("the %.2f %+.2f X I squared should equal %.2f %+.2f X I.\n",
	creal(z), cimag(c), creal(d), cimag(d));



