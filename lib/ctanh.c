//ccosh(), csinh(), cacosh(), casinh(), catanh()

#include <>
double complex ctanh(double complex z);
float complex ctanf(float complex z);
long complex ctanl(long double complex z);


const double complex z = -0.5 + 1.23 * I;
const double complex v = ctanh(z);
const double complex w = csinh(z) / ccosh(z);

printf("The ctanh() function returns %.2f %+.2f*I.\n",
	creal(v), cimag(v));
printf("Using the csinh() and ccosh() functions yields %.2f %+.2f*I.\n",
	creal(w), cimag(w));



