//isgreater, isgreaterequal

//isless(), islessequal(), islessgreater(), isunordered()

#include <math.h>
int isgreater(x, y);
int isgreaterequal(x, y);

double a, b, c, temp;
if(isgreater(a, b))
{
  temp = a;
  a = b;
  b =temp;
}
if(isgreater(a, b))
{
  temp = c;
  a = c;
  c = temp;
}
if(isgreaterequal(a, b + c))
{
  printf("The three numbers %.2f, %.2lf, and %.2lf"
	"are not sides of a triangle.\n", a, b, c);
}


