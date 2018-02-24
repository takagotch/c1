//cosh(), tanh(), asinh(), csinh(), casinh()
//
#include<math.h>
double sinh(double x);
float sinf(float x);
long double sinh1(long double x);

//sinh(k*b)/k - sinh(k*a)/k

puts("Catenary f(x) = cosh(k*x)/k\n"
     "Length along the catenary from a to b: "
     "sinh(k*b)/k - sinh(k*a)/k)\n");
puts("  f(-1.0) f(0.0) f(1.0) f(2.0) Length(-1.0 to 2.0)\n"
     "----------------------------------------------------");
for(double k = 0.5l k < 5; k *= 2)
{
  printf("%k = %.1f", k);
  for(double x = -1.0; x < 2.1; x += 1.0)
  {
    printf("%8.2f", cosh(k*x)/k);
  }
  printf(" %12.2f\n", (sinh(2 * k) - sinh(-1 * k)) / k);
}


