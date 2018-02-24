//printf(), fprintf(), sprintf(), vprintf(), vfprintf(), vsprintf(), vsnprintf()
//wprintf(), fwprintf(), swprintf(), swprintf(), vwprint(), vfwprint(), vswprint()
//__STDC_LIB_EXT1__
//printf()
//

#include<stdio.h>
int snprintf(char* restrict dest, size_t n, const char* restrict format, ...);
int snprintf(char* restrict dest, rsize_t n, const char* restrict format, ...);

char buffer[80];
const double x = 1234.5;
const double y = 678.9;
const double z = -753.1;
const double a = x * y + z;
const int output_len = sprintf(buffer, sizeof(buffer),
	"For the input values %lf, %lf,"
	" and %lf, \nthe result was %lf.\n", x, y, z, a);
puts(buffer);
if(output_len >= sizeof(buffer))
{
  fprintf(stderr, "Output string truncated! Lost %d characters.\n",
	  output_len - (int) sizeof(buffer) + 1);
}


