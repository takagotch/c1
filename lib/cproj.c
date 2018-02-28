//cbas(), imag(), creal(), carg(), conj()

#include <complex.h>
double complex cproj(double complex z);
float complex cprojf(float complex z);
long double complex cprojl(long double complex z);


const double complex z = -INFINITY - 2.7 * I;
const double complex c = cproj(z);

printf("%.2f %+.2f * I is projected to %.2f %+.2f * I.\n",
	creal(z), cimag(z), creal(c), cimag(c));


