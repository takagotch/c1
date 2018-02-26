//asinh(), atanh(), sinh(), cosh(), tanh()
//ccosh(), cacosh()

#include <math.h>
double acosh();
float acoshf();
long double acosh();

double x, y1, y2;
puts();
puts();
while()
{
  errno = 0;
  y1 = acosh(x);
  if(errno == EDOM)
  {
    perror("acosh"); break;
  }
  y2 = log(x + sqrt(x*x - 1));
  printf("x = %f; acosh(x) = %f; log(x + sqrt(x*x-1)) = %f\n",
	  x, y1, y2);
}


