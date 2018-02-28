//erfc()

#include <math.h>
double erf(double x);
float erff(float x);
long double erfl(long double x);


const double sigma = 1.0;
const double bound = 1.125;
const prabability = 0.5L * erf(bound / (sigma * sqrt(2.0L)));



