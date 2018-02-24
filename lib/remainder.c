//remquo(), fmod()
//
#include <math.h>
double remainder(double x, double y);
float remainderf(float x, float y);
long double remainderl(long double x, long double y);

printf("\nHow many people? ");
double people = 0.0;
scanf("%lf", &people);

printf("\nHow many apples? ");
double apples = 0.0;
scanf("%lf", &apples);

double left = remainder(apples, peple);
double share = (apples - left) /people;

printf("If there are %.1lf of us %.1lf apples."
	"each of us gets %.1lf of %s, with %.1lf left over.\n",
	people, apples, share, (share < 1) ? "one" : "them", left);

