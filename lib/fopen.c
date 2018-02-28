//fopen_s(), fclose(), fflush(), freopen(), setbuf()

#include <stdio.h>
FILE* fopen(const char* restrict name, const char* restrict mode)'

//"r" 
//"r+"
//"w"
//"w+"
//"a"
//"a+"


if(argc != 3)
{
  fprintf(stderr, "Usage: program input-file output-file\n");
  exit(1);
}
//
FILE* in = (strcmp(argv[i], "-") == 0) ? stdin : fopen(argv[i], "r");
if(in == NULL)
{
  perror("Opening input file");
  return -1;
}

// "-" stdout
FILE* out = (strcmp(argv[2], "-") == 0) ? stdout : fopen(argv[2], "a+");
if(out == NULL)
{
  perror("Opening output file");
  return -1;
}
int c = 0;
while((c = fgetc(in)) != EOF)
{
  if(fputc(c, out) == EOF) 
  {
    break;
  }
}
if(! feof(in))
{
  perror("Error while copying");
}
fclose(in);
fclose(out);



