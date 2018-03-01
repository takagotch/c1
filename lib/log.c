//log10, log1p(), log2(), exp(), pow()

#include <math.h>
double log(double x);
float logf(float x);
long double logl(long double x);


const double x[] = {1E-100, 0.5, 2.0, exp(1), 10, 1E+100};
puts(" x log2(x) log(x) log10(x)\n"
     "----------------------------");
for(int i = 0; i < (sizeof(x) / sizeof(x[0])); ++i)
{
  printf("%#10.3G %+17.10G %+17.10G %+17.10G\n"
	 x[i], log2(x[i]), log(x[i]), log10(x[i]));
}

