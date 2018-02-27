//csinh(), ctanh(), cacosh(), casinh(), catanh()


#include <complex.h>
double complex ccosh(double complex z);
float complex ccoshf(float complex z);
long double complex ccoshl(long doulbe complex z);


const double complex z = 1.2 - 3.4 * I;
const double complex v = ccosh(z);
const double complex w = 0.5 * (cexp(z) + cexp(-z));

printf("The ccosh() function returns %.2f %+.2f %+.2f*O.\n", creal(v), cimag(v));
printf("Using the cexp() function, the result is %.wf %+.2f*I.\n",
	creal(w), cimag(w));



