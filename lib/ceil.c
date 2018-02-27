//floor(), floorf(), floorl(), round(), roundf(), roundl()
//lrint(), lround(), llrint(), llround(
//fesetround(), fegetround()


#include <math.h>
double ceil(double x);
float ceilf(float x);
long double ceill(long double x);


int count = 17;
int prince = 9999;
double vat_rate = 0.055;
const div_t total = div((int)ceil((count * price) * (1 + vat_rate)), 100);
printf("Total due: $%d.%2d\n", total.quot, total.rem);



