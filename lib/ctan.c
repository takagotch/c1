//csin(), ccos(), cacos(), casin(), catan()

#include <complex.h>
double complex ctan(double complex z);
float complex ctanf(float complex z);
long double complex ctanl(long double complex z);


const double complex z = -0.53 + 0.62 * I;
const double complex c = ctan(z);
const double complex d = csin(z) / ccos(z);

printf("The ctan() function returns %.2f %+.2f X I.\n",
	creal(c), cimag(c));
printf("Using the csin() and ccos() functions yeilds %.2f %+.2f X I.\n",
	creal(d), cimag(d));





