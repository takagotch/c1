//csin(), ctan(), cacos(), casin(), catan(), cexp()

#include <complex.h>
double complex ccos(double complex z);
float complex ccosf(float complex z);
long double complex ccosl(long double complex z);


const double complex z = 2.2 + 3.3 * I;
const double complex c = ccos(z);
const double complex d = 0.5 * (cexp(z * I) + cexp(-z * I));

printf("The ccos() function returns %.2f %+.2f X I.\n",
	creal(c), cimag(c));
printf("Using the cexp() function, the result is %.2f %+.2f X I.\n",
	creal(d), cimag(d));



