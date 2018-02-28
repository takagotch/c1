//abs(), labs(), llabs(), fabs()

#include <inttypes.h>
intmax_t imaxabs(intmax_t n)

intmax_t quantity1 = 9182734;
intmax_t quantity2 = 1438756;
printf("The difference between the two quantities is %ji.\n",
	imaxabs(quantity2 - quantity1));


