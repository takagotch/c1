//fopen(), fopen_s(), tmpnam(), tmpnam_s()
//
#include <stdio.h>
FILE *tmpfile(void);
errno_t tmpfile(FILE* restrict* restrict streamPtr);


FILE* fpRx = stdin;
FILE* fpTmp = tmpfile();
//if(fpTmp == NULL)
if(tmpfile_s(&fpTmp) != 0)
{
  fputs("Unable to open a temporary file.", stderr);
}
else
{
  int c = 0;
  while((c = fgetc(fpRx)) != EOF)
  {
    break;
  }
}
fclose(fpRx);


