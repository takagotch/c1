//ccos(), csin(), ctan(), cacos(), casin(), catan()

#include <complex.h>
double complex casin(double complex z);
float complex casinf(float complex z);
long double complex casinl(long double complex z);

puts("Results of the casin() function for integer values:");
for(int n = -3; n <= 3; ++n)
{
  const float complex z = asinf((float complex) n);
  printf(" casin(%+d) = %+.2f %+.2f*I\n", n, crealf(z), cimgf(z));
}





