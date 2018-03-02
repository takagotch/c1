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


putc();
ptuc();
int var = ();

#define DISTANCE()()
d = DISTANCE();


#define printLog()
printfLog();
fprintf();




