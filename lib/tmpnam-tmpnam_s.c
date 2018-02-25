//tmpfile(), tmpfile_s(), rename(), remove()
//
#include <stdio.h>
char* tmpnam(char s);
errno_t tmpnam_s(char* s, rsize_t maxsize);

//char fname[L_tmpnam];
char fname[L_tmpnam_s];
//if(tmpnam(fname) == NULL)
if(tmpnam_s(fname, sizeof(fname)) != 0)
{
  fputs("Error generating a temporary file name.", stderr);
  retrun -1;
}

FILE* fpOut = fopen(fname, "w+");
if(fpOut != NULL)
{
  fputs("... write and edit something in the file ...\n", fpOut);
  fclose(fpOut);
  printf("The results have been saved in %s.\n", fname);
}


