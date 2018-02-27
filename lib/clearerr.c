//feof(), ferror(), rewind()



#include <stdio.h>
void clearerr(FILE* fp);

FILE* fp = fopen("infile.dat", "r");
if(fp == NULL)
{
  fprintf(stderr, "Couldn't open input file.\n");
}
else
{
  int c = fgetc(fp);
  if(c == EOF)
  {
    if(feof(fp))
    {
      fprintf(stderr, "End of input file reached.\n");
    }
    else if(ferror(fp))
    {
      fprintf(stderr, "Error on reading from input file.\n");
    }
    clearerr(fp);
  }
  else
  {
    /*  */
  }
  fclose(fp);
}

