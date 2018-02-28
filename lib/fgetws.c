//fputws(), putwc(), fgetwc(), fgets(), fputs()

#include <stdio.h>
#include <wchar.h>
wchar_t* fgetws(wchar_t* restrict buffer, int n, FILE* restrict fp);

FILE* fp_in_wide = fopen("local_in.txt", "r");
if(fp_in_wide == NULL)
{
  perror("Opening input file");
  return -1;
}
fwide(fp_in_wide, 1);

wchar_t buffer[4096];
const wchar_t* line = fgetwc(buffer, sizeof(buffer), fp_in_wide);
if(line == NULL)
{
  perror("Reading from input file");
}




