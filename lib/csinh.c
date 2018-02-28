//ccosh(), ctanh(), cacosh(), casinh(), catanh()


#include <complex.h>
double complex csinh(double complex z);
float complex csinhf(float complex z);
long double complex csinhl(long double complex z);



const double complex z = -1.2 + 3.4 * I;
const double complex v = csinh(z);
const double complex w = 0.5 * (cexp(z) - cexp(-z));

printf("The csinh() function returns %.2f %+.2f*I.\n",
		creal(w), cimag(z));
printf("Using the cexp() function, the result is %.2f %+.2f*I.\n",
		creal(w), cimag(w));


