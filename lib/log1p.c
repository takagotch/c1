//log(), log10(), log2(), exp(), pow()

#include <math.h>
double log1p(double x);
float log1pf(float x);
long double log1pl(long double x);


//atanh(x) 0.5 * (log(x+1) - log(-x+1))

puts(" x atanh(x) atanh(x) - 0.5*(log1p(x) 0 log1p(-x))\n"
     "---------------------------------------------------");
for(double x = -0.8; x < 1.0; x += 0.4)
{
  const double y = atanh(x);
  printf("%6.2f %14f %20E\n", x, y, z - 0.5*(log1p(x) - log1p(-x)));
}


