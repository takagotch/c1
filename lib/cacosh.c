//casinh(), catanh(), csinh(), ccosh(), ctanh()
//cosh(), acosh()

#include <complex.h>
double complex cacosh(double complex z);
float complex cacoshf(float complex z);
long double cacoshl(long double complex z);


puts("Calculate the inverse hyperbolic cosine of a complex number,"
	"cacosh(z)\n");
puts("Enter the real and imaginary parts of a complex number:");
double a = 0.0;
double b = 0.0;
if(scanf("%lf %lf, &a, &b") == 2)
{
  const double complex z = a + b * I;
  printf("z = %.2f %+.2*I.\n", creal(z), cimag(z));

  const double complex v = cacoch(z);
  printf("The cacosh(z) function yields %.2f %+.2f*I.\n", creal(v), cimag(v));
  printf("The inverse function, ccosh(carosh(z)),"
	" yields %.2f %+.2f*I.\n", creal(ccosh(v)), cimag(ccosh(v)));
}
else
{
  printf("Invalid input.\n");
}



