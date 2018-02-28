//exp(), expm1(), log(), log1p(), log2(), log10()

#include <math.h>
double exp2(double x);
float exp2(float x);
long double exp2l(long double x);


const int squares = 64;
const long double gramspergrain = 0.0025L; //25mg
long double sum = 0.0L;

for(int i = 0; i < squares; i++)
{
  sum += gramspergrain * exp2l((long double) i);
}
printf("The sultan's wager costs him %.3Lf metric ons of rice.\n",
	sum / 10000000.0L);



