//fflush(), fopen, setbuf()

#include <stdio.h>
int fclose(FILE* fp);




FILE* fp_infile = fopen("input.dat", "r");
if(fp_infile == NULL)
{
  fprintf(stderr, "Couldn't open input file.\n");
  return -1;
}
char linebuffer[512];
while(fgets(linebuffer, sizeof(linebuffer), fp_infile) != NULL)
{
  fputs(linebuffer, stdout);
}
if(! feof(fp_infile))
{
  fprintf(stderr, "Error reading form input file.\n");
}
if(fclose(fp_infile) != 0)
{
  fprintf(stderr, "Error closing input file.\n");
  return -2;
}

