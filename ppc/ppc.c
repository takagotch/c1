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
printDBL();  //atan() math.h

printf();
printf();

4 * atan() = 3.141593

puts();

#define TEXT_A ""
#define msg() puts()
msg();

puts();
puts();

msg();
puts();


-----

#include <>
#include <>

#define PI 
#define ATEP
#define AMPLITUDE
#define ATTENUATION
#define DF()




