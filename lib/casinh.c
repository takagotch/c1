//cacosh(), catanh(), ccosh(), csinh(), ctanh()
//acosh(), atanh(), sinh(), cosh(), tanh()

#include <complex.h>
double complex casinh(double complex z);
float complex casinhf(float complex z);
long double complex casinhl(long double complex z);


puts("Enter the real and imaginary parts of a complex number:");
double a = 0.0;
double b = 0.0;
if(scanf("%lf %lf", &a, &b) == 2)
{
  const double complex z = a + b * I;
  printf("z = %.2f %+.2f*I.\n", creal(z), cimag(z));

  const double complex v = casin(z);
  const double complex w = casinh(z);
  printf("z is the sine of %.2f %+.2f*I\n", creal(v), cimag(v));
  printf("and the hyperbolic sine of %.2f %+.2f*I.\n",
	  creal(w), cimag(w));
}
else
{
  printf("Invalid input. \n");
}

