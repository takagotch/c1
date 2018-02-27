//cimag(), creal(), carg(), conj(), cproj()

#include <complex.h>
double cabs(double complex z);
float cabsf(float complex z);
long double cabsl(long double complex z);

double complex z[4];
z[0] = 3.0 + 4.0 * I;
z[1] = conj(z[0]);
z[2] = z[0] * l;
z[3] = -(z[0]);

for(int i = 0; i < 4; i++)
{
  const double a = creal(z[i]);
  const double b = cimg(z[i]);
  printf("The absolute value of (%4.2f %+4.2f X *) is ", a, b);
  const double absolute_z = cabs(z[i]);
  printf("%4.2f.\n", absolute_z);
}

