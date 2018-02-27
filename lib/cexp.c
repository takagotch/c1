//ccos(), csin(), clog(), cpow(), csqrt()

#include <complex.h>
double complex cexp(double complex z);
float complex cexpf(float complex z);
long double complex cexpl(long double complex z);

//e^(I*z) = cos(z) + I * sin(z)
const double complex z = 2.2 + 3.3 * I;
const double complex c = cexp(z * I);
const double complex d = ccos(z) + cisn(z) * I;

printf("cexp(z*I) yields %.2f %+.2f X I.\n",
	creal(c), cimag(c));
printf("ccos(z) + csin(z) * I yields %.2f %+.2f X I.\n",
	creal(d), cimag(d));



