//setbug(), setvbut()

#include <stdio.h>
int fflush(FILE* fp);


/* fflush_ex.c */
#ifdef FLUSH
  const char filename[ ] = "twice.txt";
#else
  const char filename[ ] = "once.txt";
#endif /* FLUSH */

FILE* fp = fopen(filename, "w");
if(fp == NULL)
{
  fprintf();
  return -1;
}
fputs();
fflush();

fputs();

#ifdef FLUSH
  fflush(fp);
#endif

raise();







//cc -DEFUSH -o fflushtwice fflush.c
//
//

