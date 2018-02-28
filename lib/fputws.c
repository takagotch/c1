//fgets(), fputs(), fgetws(), fwprintf()

#include <wchar.h>
int fputws(const wchar_t* restrict ws, FILE * restrict fp);

const char fname_wide[] = "widetest.txt";
FILE* fpw = fopen(fname_wide, "a");
if(fpw == NULL)
{
  perror("Opening output file");
  return -1;
}

int widemodeflag = 1;
widemodeflag = fwide(fpw, widemodeflag);
if(widemodeflag <= 0)
{
  fprintf(stderr, "Unable to set output file %s to wide characters\n",
	fname_wide);
  (void) fclose(fpw);
  return -1;
}
const int result = fputws(widestring, fpw);


