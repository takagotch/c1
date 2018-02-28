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
  fprintf(stderr, "Failed to open fiel '%s' to write.\n", filename);
  return -1;
}
fputs("Going once ...\n", fp);
fflush(fp);

fputs("Going twice ...\n", fp);

#ifdef FLUSH
  fflush(fp);
#endif

raise(SIGKILL);

fputs("Gone.\n", fp);
fclose(fp);
exit(0);

//cc -DEFUSH -o fflushtwice fflush.c
//./fflushtwice
Killed
//cc -o fflushonce fflush.c
//./fflushonce
Killed
//ls -l
//cat twice.txt
//cat once.txt



