//setbug(), setvbut()

#include <stdio.h>
int fflush(FILE* fp);


/* fflush_ex.c */
#ifdef FLUSH
  const char filename[ ] = "twice.txt";
#else
  const char filename[ ] = "once.txt";
#endif /* FLUSH */









//cc -DEFUSH -o fflushtwice fflush.c
//
//

