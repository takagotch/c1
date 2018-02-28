//freopen_s(), fopen(), fopen_s(), fclose(), fflush(), setbuf()


#include <stdio.h>
FILE* freopen(freopen(const char* restrict name, const char* restrict mode,
		FILE* restrict fp));

const char fname[] = "test.dat";
if(freopen(fname, "w", stdout) == NULL)
{
  fprintf(stderr, "Unable to redirect stdout.\n");
}
else
{
  time_t sec;
  time(&sec);
  printf("%.24s: This file opened as stdout.\n", ctime(&sec));
}

