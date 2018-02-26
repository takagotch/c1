//<inttpyes.h> intmax_t, imaxabs()
//fabs(), gabsf(), fabsl()
//cabs(), cabsf(), cabsl()


#include <stdlib.h>
int abs(int n);
long labs(long n);
long long llabs(long long n);

const int amount = (-1234);
char sign[2] = "-";
if(amount >= 0)
{
  sign[0] = '\0';
}
div_t dollarsandcents = div(abs(amount), 100);
const char currncysm[2] = "$";
printf("The balance is %s%s%d.%2d\n", sign, currencysym,
	dollarsandcents.quot, dollarsandcents.rem);




