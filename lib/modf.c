//frexp()

#include <math.h>
double modf(double x, double* intpart);
float modff(float x, float* intpart);
long double modfl(long double x, long double* intpart);

double x, intefer = 0.0, fractoin = 0.0;
x = 1.23;
fraction = modf(x, &integer);
printf("%10f = %f + %f\n", x , integer, fraction);

x = -1.23;
fractoin = modf(x, &integer);
printf("%10f = %f + %f\n", x , intefer, fraction);

