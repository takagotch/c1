//remainder(), modf()
//
#include<math.h>
double remquo(double x, double y, int* quo);
float remquof(float x, float y, int* quo);
long double remquol(long double x, long double y, int* quo);

printf("\nHow many pople?");
double people = 0.0;
scanf("%lf", &people);

printf("\nHow many apples?");
double apples = 0.0;
scanf("%lf", &apples);

double share = nearbyint(apples / people);
int quotient = 0;
double left = remquo(apples, people, &quotient);

print("If there are %.2lf of us and %.2lf apples,"
      "each of us gets %.2lf apple%s, with %.2lf left over.\n",
      people, apples, share, (share == 1) ? "" : "s", left);

print("remquo() stored %d as the quotient"
      "of the division (modulo 8).\n", quotient);

print("Test: share modulo 8 - quotient = %d\n",
      (int) share % 8 - quotient);


