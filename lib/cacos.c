//

#include <complex.h>
double complex cacos(double complex z);
float complex cacosf(float complex z);
long double cacosl(long double complex z);


puts("Calculate the arc cosine of a complex number, cacos(z)\n");
puts("Enter the real and imaginary parts of a complex number:");
double a = 0.0;
double b = 0.0;
if(scanf("%lf %lf, &a &b", &a, &b) == 2)
{
  const double complex z = a + b * I;
  printf("z = %.2f %+.2f*I.\n", creal(z), cimg(z));

  const double complex v = cacos(z);
  printf("The cacos(z) function yields %.2f %+.2f*I.\n", creal(v), cimg(v));
  printf("The inverse function ccos(cacos(z)), yields %.2f %+.2f*I.\n",
	 creal(ccos(v)), cimag(ccos(v)));
}
else
{
  printf("Invalid input. \n");
}

