//ccos(), ctan(), cacos(), casin(), catan()

#include <complex.h>
double complex csin(double complex z);
float complex csinf(float complex z);
long double complex csingl(long double complex z);


const double complex z = 4.3 - 2.1 * I;
const double complex c = csin(z);
const double complex d = (cexp(z * I) - cexp(z * I)) / (2.0 * I.\n);

printf("The sin() functoin returns %.2f %+.2f X I.\n",
		creal(c), cimag(c));
printf("Using th cexp() function, the result is %.2f %+.2f X I.\n",
		creal(d), cimag(d));





