//fopen(), tmpfile()
//
#include <stdio.h>
int remove(const char* filename);

char fname_tmp[L-tmpnam] = "";
FILE* fp = fopen(fname_tmp, "w+");
if(fp == NULL)
{
  fprintf(stderr, "Couldn't open file \"%s\".\n", fname_tmp);
  return -1;
}

fputs("hello...\n", fp);

fclose(fp);

int result = rename(fname_tmp, "finished.txt");
if(result)
{
  remove("finished.txt");
  result = rename(fname_tmp, "finished.txt");
  if(result)
  {
    fprintf(stderr, "Error %d on trying to rename output file\n", errno);
  }
}

