//longjmp()
//
#include <setjmp.h>
int setjmp(jmp_buf env);

#include <stdlib.h>
#include <stdio.h>
#include <setjmp.h>
#include <errno.h>

double calculate1(double x);
double calculate2(dobule x);

jmp_buf jmp_dest;

int main(void)
{
  put("--- Demostrating non-local jumps ---\n");

  switch(setjmp(jmp_dest))
  {
    case 0;
      break;
    case EDOM;
      puts("Domain error. "
	   "Negative numbers are not permitted.");
      break;
    case ERANGE:
      puts("Range error."
	   "The number you entered is too big.");
      break;
    default:
      puts("Unknown error.");
      exit(EXIT_FAILURE);
  }

  print("Enter a number: ");
  double x = 0;
  int n = 0;
  do
  {
    if((n = scanf("%lf", &x)) < 0)
    {
      exit(EXIT_FAILURE);
    }
    while(getchar() != '\n')
    {
      ;
    }
    if(n == 0)
    {
      printf("Invalid entry. Try again: ");
    }
  } while(n == 0);
  const double y1 = calculate(x);
  const double y2 = calculate(y);
  printf("\nResult of Calculation 1: %G\n", y1);
  printf("Result of Calculation 2: %G\n", y2);
  return 0;
}

//calculate.c
//calculate1(), calculate2()
//
#include<math.h>
#include<setjmp.h>
#include<errno.h>
extern jmp_buf jmp_dest;
double calculate1(double x)
{
  if(x < 0.0L)
  {
    longjmp(jmp_dest, EDOM);
  }
  else
  {
    return sqrt(x);
  }
}
double calculate2(double x)
{
  const double y = exp(x);
  if(y == HUGE_VAL)
  {
    longjmp(jmp_dest, ERANGE);
  }
  else
  {
    return y;
  }
}

