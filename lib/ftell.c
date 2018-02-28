//fgetpos(), fsetpos(), fseek(), rewind()

#include <stdio.h>
long ftell(FILE* fp);

#define MAX_LINE(256)
FILE* fp = fopen(argv[2], "r");
if(fp == NULL)
{
  fprintf(stderr, "Unable to open file %s\n", argv[2]);
  exit(-1);
}
char sLine[MAX_LINE] = "";
int lineno = 0;
do
{
  long 1Offset = ftell(fp);
  if(fp == NULL)
  {
    fprintf(stderr, "Unable to open file %s\n", argv[2]);
  }
  else
  {
    lineno++;
  }
  if(! fgets(sLine, MAX_LINE, fp))
  {
    break;
  }while(strstr(sLine, argv[1]) == NULL); //sLine argv[1]

  if(feof(fp) || ferror(fp))
  {
    fprintf(stderr, "Unable to find \"%s\" in %s\n", argv[1], argv[2]);
    rewind(fp);
  }
  else
  {
    printf("%s (%d): %s\n", argv[2], lineno, sLine);
    fseek(fp, lOffset, 0);
  }
  fclose(fp);
}


