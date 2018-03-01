//

#include <stdio.h>
int printf(const char* restrict format, ... );

//%[flags][field width][.precision][length modifier]specifier
//+
//' '
//-
//0
//#

//hh d,i,o,u,x,X signed char || unsigned char
//hh n           signed char*
//h  d,i,o,u,x,X short int || unsigned short int
//
//...

//d,i int 
//u unsigned in
//
//...


//double pi = 3.1415926;
//double bignumber = 8 * 8 * 8 * pi * pi;
//printf("512 times pi cubes equals %.2e, or %.2a.\n", bignumber, bignumber);

//intN_t, unintN_t PRIdW,PRIiN, PRIoN, PRIuN, PRIxN, PRIXN
//...
//

//int fast16_t counter = 1001;
//while(--counter)
//{
//  printf("Only %" PRIiFAST16 " nights to go.\n", counter);
//}


static void print_line(double x)
{
  int n1;
  int n2;
  printf("x = %5.2f exp(x) = %n%10.5%n\n", x, &n1, exp(x), &n2);
  assert(n2-n1 <= 10);
}

//fprintf(),sprintf(),snprintf()
//wprintf(),fwprint(),swprintf()
//printf(),vprintf(),vfprintf(),vsnprintf()
//printf(),vwprint(), vfwprint(), vswprint()
//scanf(), sscanf(), fscanf()
//__STDC_LIB_EXT1__

