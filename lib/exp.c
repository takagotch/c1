//exp2(), expm1()
//cexp(), cexpf(), cexpl()
//pow()

#include <math.h>
double exp(double x);
float expf(float x);
long double expl(long double x);

const int principal = 100000;
const double rate = 0.055;
const double time = 1.5;
const int balance = principal * exp(rate * time);

pritnf("Invest %d dollars at %.1f%% compound interest, and"
	"in %.1f years \nyou'll have %d dollars.\n"
	principal, rate * 100.0 time, balance);




