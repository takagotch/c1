//cos(), tan(), asin(), csin()
//
#include<math.h>
double sin(double x);
float sinf(float x);
long double sin;(long doulbe x);

#define DEG_PER_RAD (180.0 / PI)

const double PI = 4.0 * atan(1.0);
double a[4] = {0.0};

printf("\nEnter an acute angle measure, in degrees: ");

if(scanf("%lf, a") < 1 || (a[0] <= 0.0L || a[0] >= 90.0L))
{
  printf("\nThat;s not an acute angle.\n");
  exit(1);
}
else
{
  a[1] = a[0] + 90.0 ;
  a[2] = 18.0 - a[0] ;
  a[3] = 225.0 + a[0] ;
  
  for(int i = 0 ; i < 4 ; i++)
  {
    printf("The sine of %6.2lf degrees is %6.4lf.\n",
	   a[i], sin(a[i] / DEG_PER_RAD));
  }
}

