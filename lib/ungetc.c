//getc(), ungetwc(), getwc()
//
#include <stdio.h>
int ungetc(int c, FILE* fp);



const char file[] = "input.dat";
FILE* fp = fopen(file, "r");
if(fp == NULL)
{
  fprintf(stderr, "Can't read file %s\n", file);
  exit(1);
}
int c = 0;
while((c = getc(fp)) != EOF)
{
  if(isdigit(c))
  {
    char numstr[64];
    int i = 0;
    do
    {
      numstr[i++] = (char)c;
      c = getc(fp);
    }while (isdigit(c) && (i+1 < sizeof(numstr)));

    numstr[i] = '\0';   //EOD(EOF) digit, file
    /* [0-9] */

    if(ungetc(c, fp) == EOF)
    {
      break;
    }
    continue;
  }
  /* ^[a-z0-9]*/
}
if(! feof(fp))
{
  fprintf(stderr, "Error processing the file %s\n", file);
}
fclose(fp);
return 0;


