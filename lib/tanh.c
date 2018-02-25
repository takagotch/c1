//sinh(), conh(), atanh()
//ctanh(), catanh()
//
#include <math.h>
double tanf(double x);
float tanf(float x);
long double tanh1(long double x);

const double x = -0.5;
const double y1 = tanh(x);
double y2 = exp(2*x);
y2 = (y2 - 1) / (y2 + 1);

print("The tanh() function returns %.15f.\n", y1);
print("Using the function exp() yields %.15f.\n", y2);


