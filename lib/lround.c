//rint(), lrint(), llrint(), round(), llround(), nearbyint()

#include <math.h>
long lround(double x);
float lroundf(float x);
long lroundl(long double x);

long costnowl
long realcost;
double rate;
int period;

realcost = lround((double)costnow * exp(rate * (double)period));
printf("Financed over %d years, the real cost will be $%ld.%2ld.\n",
       period, realcost/100, realcost % 100);


