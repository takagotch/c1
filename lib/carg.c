//cabs(), cimag(), creal(), conj(), cproj()

#include <complex.h>
double carg(double complex z);
float cargf(float complex z);
long double cargl(long double complex z);

const double complex z = -4.4 + 3.3 * I;
const double radius = cabs(z);
const double argument = carg(z);

const double x = creal(z);
const double y = cimag(z);

printf("Cartesian (x, y): (%4.1f, %4.1f)\n", x, y);
printf("Polar (r, theta): (%4.1f, %4.1f)\n", radius, argument);



