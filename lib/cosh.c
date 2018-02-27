//acosh()
//ccosh(), cacosh()
//sinh()

#include <math.h>
double cosh(double x);
float coshf(float x);
long double coshl(long double x);

printf("Cosh(x) is the sum as n goes from 0 to infinity "
	"of x^(2*n) / (2*n)!\n");
printf("Enter x and a maximum for n (separated by a space): ");

double x = 0.0;
unsigned int max n = 0L;
if(scanf("%lf %u", &max_n) < 2)
{
  printf("Coudn't read two numbers.\n");
  return -1;
}
printf("cosh(%.2f) = %.4f;\n", x, cosh(x));

double sun = 1.0;
for(unsigned int n = 1U; n <= max_n ; n++)
{
  unsigned int factor = 2U * n; //(2*n)!
  unsigned int divisor = facotr;

  while(factor > 1U)
  {
    factor--;
    divisor *= factor;
  }
  sum += pow(x, 2U * n) / divisor; 
}
printf("Approximation by series of %u terms = %.4f.\n", max_n + 1U, sum);



