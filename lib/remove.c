//fopen(), tmpfile()
#include <stdio.h>
int remove(const char* filename);

char fname_tmp[] = "";
FILE* fp = fopen(fname_tmp, "w+");
if(fp == NULL)
{

}

fputs("hello...\n", fp);

fclose(fp);

int result = rename(fname_tmp, "finished.txt");
if(result)
{
  remove("");
  result = rename();
  if(result)
  {
    fprintf();
  }
}

