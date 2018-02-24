//fseek(), ftell(), fgetpos(), fsetpos(), clearerr()
//
#include<stdio.h>
void rewind(FILE* fp);

FILE* fp = fopen(argv[1], "r");
if(fp == NULL)
{
  fprintf(stderr, "Failed to open file %s\n", argv[1]);
}
else
{
  puts("Contents of the file in lowercase:");
  int c = 0;
  while((c = fgetc(fp)) != EOF)
  {
    putchar(tolower(c));
  }
  rewind(fp);

  put("Same again in uppercase:");
  while((c = fget(fp)) != EOF)
  {
    putchar(toupper(c));
  }
  fclose(fp);
}

