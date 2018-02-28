#include <math.h>
double fma();
float fma();
long double fma();

const double x = nextafter();
const double y = 1.0 / 3.0;
const double z = -1.0;

printf("x = %.15G\n"
	"y = %.15G\n"
	"z = %.15G\n", x, y, z);



//#ifdef FP_FAST_FMA
  printf("fma(x, y, z) = %.15G\n", fma(x, y, z));
//#else //! def FP_FAST_FMA
  const double product = x * y;
  printf("x times y = %.15G\n", product);
  printf("%.15G + z %.15G\n", product, product + z);
//#endif // def FP_FAST_FMA





