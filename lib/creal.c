//cimag(), cabs(), carg(), conj(), cproj()


#include <complex.h>
double creal(double complex z);
float crealf(float complex z);
long double creall(long double complex z);


double complex z = 4.5 - 6.7 * I;
printf("The complex variable z is equal to %.2f %+.2f X I.\n"
	creal(z), cimag(z));


