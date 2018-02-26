//acosh(), atanh(), sinh(), cosh(), tanh()
//csinh(), casinh()

#include <math.h>
double asinh(double x);
float asinhf(float x);
long double asinhl(long double x);

puts("x  asinh(x)  log(x + sqrt(x*x+1))\n"
     "-----------------------------------");
for(double x = -2.0; x < 2.1; x += 0.5)
{
  printf("%6.2f %15f %20f\n", x, asinh(x), log(x +sqrt(x * 1.0)));
}


