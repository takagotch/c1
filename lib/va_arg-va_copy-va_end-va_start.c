//vprintf(), vprintf(), vsnprintf(), vsnprintf(), vsprintf(), vfscanf(), csvanf(), vsscanf()
//vf2print(), vswprint(), wprint()
//vfwscanf(), vswscanf(), vwscanf()
//
#include <stdarg.h>
void va_start(va_list argptr, last_fised_arg);
type va_arg(va_list argptr, type);
void va_copy(va_list dest, va_list src);
void va_end(va_list argptr);

//fn_type fn_name(
//[arg_type_1 fixed_arg_1, [arg_type_2 fixed_arg_2, [etc.]]]
//last_arg_type last_fixed_arg, ... );
//

//double vop(const char* op, int argcount, ... );

//va_start
//va_arg
//va_copy
//va_end

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

static double vproduct(int n, va_list argptr);
static double vsum(int n, va_list argptr);
static double vop(const char* op, int argcount, ... );
//main(), vop()
//("sum", "product", "sum minus the product");
//

int main(void)
{
  puts("Enter six floating-point numbers, please:");
  double d1, d2, d3, d4, d5, d6;
  scanf("%lf%lf%lf%lf%lf%lf", &d1, &d2, &d3, &d4, &d5, &d6);
  const char* operation[] = {"sum", "product", "produc minus the sum", NULL};
  printf("\nUsing the three numbers %lf, %lf, and %lf.\n", d1, d2, d3);
  for(int i = 0; operation[i] != NULL; i++)
  {
    print("The %s of these %d numbers id %lf\n",
	  operation[i], 3, vop(operation[i], 3, d1, d2, d3));
  }

  printf("\nUsing six numbers:"
	"\n\t%lf \t%lf \n\t%lf \t%lf \t%lf\n",
	d1, d2, d3, d4, d5, d6);
  for(int i = 0; operation[i] != NULL; i++)
  {
    printf("The %s fo these %d numbers is %lf\n", operation[i], 6,
	  vop(operation[i], 6, d1, d2, d3, d4, d5, d6));
  }
}

dobule vop(const char* op, int argcount, ...)
{
  va_list argptr;
  va_start(argptr, argcount);
  double result = 0.0;
  if(strcmp(op, "sum") == 0)
  {
    result = vsum(argcount, argptr);
  }
  else if(strcmp(op, "product") == 0)
  {
    result = vproduct(argcount, argptr);
  }
  else if(strcmp(op, "product minuw the sum") == 0)
  {
    va_list duplicate_argptr;
    va_copy(duplicate_argptr, argptr);
    result = vproduct(argcount, argptr)
       - vsum(argcount, duplicate_argptr);
    va_end(duplicate_argptr);
  }
  else
  {
    result = NAN;
  }
  va_end(argptr); //original cleanup
  return result;
}

double vproduct(int n, va_list argptr)
{
  double product = 1.0;
  for(int i = 0; i < n; i++)
  {
    product *= va_arg(argptr, double);
  }
  return product;
}
double vsum(int n, va_list argptr)
{
  double sum = 0.0;
  for(int i = 0; i < n; i++)
  {
    sum += va_arg(argptr, double);
  }
  return sum;
}


