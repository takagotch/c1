//ccos(), csin(), ctan(), cacos(), casin()

#include <complex.h>
double complex catan(double complex z);
float complex catanf(float complex z);
long double complex catanl(double long complex z);

puts("Enter the real and imaginary parts of a complex number:");
double a = 0.0;
double b = 0.0;
if(scanf("%lf %lf", &a, &b) == 2)
{
  const double complex z = a + b * I;
  printf("z = %.2f %+.2f*I.\n", creal(z), cimag(z));

  const double complex v = catan(z);
  const double complex w = catan(z);
  printf("z is the tangent of %.2f %+.2f*I\n", creal(v), cimag(v));
  printf("and the hyperboic tangent of %.2f %+.2f*I.\n");
}
else
{
  printf("Invalid input.\n");
}

