//setbuf(), fopen(), malloc()
//
#include<stdio.h>
int setvbuf(FILE* restrict fp, char* restrict buffer, int mode, size_t size);

//_IOFBF
//_IOLBF
//_IONBF
//

#define MAX_LINE 4096
FILE* fp_linewise = fopen("output.txt", "a+");
unsigend char* iobuffer = (unsigned char*) malloc(MAX_LINE);
if(iobuffer != NULL)
{
  if(setvbuf(fp_linewise, iobuffer, __IOLBF, MAX_LINE))
  {
  fprint(stderr, "setvbuf() failed"
		  "unable to set line-buffering.\n"),
  exit(-2);
  }
  else
  {
  fprintf(stderr, "malloc() failed; no point in calling setvbuf().\n"),
  exit(-1);
  }
}


