#define MacroName A long, \
long macro replacement value

#include <filename>
#include "filename"

#include <math.h>

#ifdef _DEBUG_
  #define MY_HEADER "myProject_dbg.h"
#else
  #define MY_HEADER "myProject.h"
#endif
#include MY_HEADER



#include <stdio.h>

#include <stdio.h>
#include "myProject.h"


#ifdef INCFILE_H_
#define INCFILE_H_
#endif /* INCFILE_H_ */

#define ARRAY_SIZE 100
doulbe data[ARRAY_SIZE];

#define macro_name replacement_text

#define TITLE "*** Examples of Macros Without Parameters ***"
#define BUFFER_SIZE (4 * 512)
#define RANDOM(-1.0 + 2.0*(double)rand() / RAND_MAX)


#include <stdio.h>
#include <stdlib.h>
puts(TITLE);
static char myBuffer[BUFFER_SIZE];
setvbuf(fp, myBuffer, _IOFBF, BUFFER_SIZE);
for(int i = 0; i < ARRAY_SIZE; ++i)
{
  data[i] = 10.0 * RANDOM;
}


#define macro_name([parameter_list]) replacement_text
#define macro_name([parameter_list,] ... ) replacement_tex

#define getchar() getc(stdin)
#define putcahr(x) putc(x, stdout)


#include <stdio.h>
#define DELIMETER ':'
#define SUB(a,b) (a-b)
putchar(DELIMITER);
putchar(str[i]);
int var = SUB( ,10);


putc(':', stdout);
ptuc(str[i], stdout);
int var = (-10);

#define DISTANCE(x, y)((x)>=(y) ? (x)-(y) : (y)-(x))
d = DISTANCE(a, b+0.5);

d = ((a)>=(b+0.5) ? (a)-(b+0.5) : (b+0.5)-(a))

#define printLog(...) fprintf(fp_log, __VA_ARGS__)
printfLog("%s: intVar = %d\n", __func__m intVar);
fprintf(fp_log, "%s: intVar = %d\n", __func__, intVar);


#define printfDBL(exp) printf(#exp " = %f", exp)
printDBL(4 * atan(1.0));  //atan() math.h

printf("4 * atan(1.0)" " = %f", 4 * atan(1.0));
printf("4 * atan(1.0) = %f", 4 * atan(1.0));

4 * atan(1.0) = 3.141593

#define showArgs(...) puts(#__VA_ARGS__)
showArgs(one\n, "2\n", three);

puts("one\n, "2\n", three");

#define TEXT_A "Hello!"
#define msg(x) puts(TEXT_ ## x)
msg(A);

puts("Hello!");
puts(TEXT_A);

msg();
puts(TEXT_);


-----

#include <stdio.h>
#include <math.h>

#define PI 3.141593
#define ATEP (PI/8)
#define AMPLITUDE 1.0
#define ATTENUATION 0.1
#define DF(x) exp(-ATTENUATION*(x))
#define FUNC(x) (DF(x) * AMPLITUDE * cos(x))
#define STR(s) #s
#define XSTR(s) STR(s)

int main(void)
{
  double x = 0.0;

  printf("\nFUNC(x) = %s\n", XSTR(FUNC(x)));
  printf("\n %10s %25\n", "x", STR(y = FUNC(x)));
  printf("-------------------------------\n");
  for(; x < 2.0 * PI + STEP / 2.0; x += STEP)
  {
    printf("%15f %20Lf\n", x, FUNC(x));
  }
  return 0;
}




