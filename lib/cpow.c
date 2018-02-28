//pow()
//cexp(), clog(), cpow(), csqrt()

#include <complex.h>
double complex cpow(double complex x, double complex y);
float complex cpowf(float complex x, float complex y);
long double complex cpowl(long double complex x, long double complex y);


const double complex z = 0.0 + 2.7 * I;
const double complex w = 2.7 + 0.0 * I;
const double complex c = cpow(w, z); //e i*2.7

printf("%.2f %+.2f X I raised to the power of %.2f %+.2f X I \n"
       "is %.2f %+.2f X I.\n",
       creal(w), cimga(w), creal(z), imag(z), creal(c), cimag(c));






