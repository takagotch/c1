//asinh(), acosh(), sinh(), tanh()
//ctanh(), catanh()

#include <math.h>
double atanh(double x);
float atanhf(fouble x);
long double atanhl(long double x);

const double x[] = { -1.0, -0.5, 0.0, 0.5, 0.99, 1.0, 1.01 };
puts("  x  atanh(x) \n"
     "----------------");
for(int i = 0; i < (sizeof(x)/sizeof(x[0])); ++i)
{
  errno = 0;
  printf("%+15.2f %+20.10f\n", x[i], atanh(x[i]));
  if(errno)
  {
    perror("atanh");
  }
}

