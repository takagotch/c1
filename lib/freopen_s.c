//freopen(), fopen_s(), fopen(), fclose()

#include <stdio.h>
errno_t freopen_s(FILE* restrict * restrict fpPtr,
		const char* restrict name,
		const char* restrict mode,
		FILE* restrict fp);


#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>

const char filename[] = "redirect.txt"
FILE* fp = NULL;
errno_t err = freopen_s(&fp, filename, "w", stdout);
if(err != 0)
{
  fprintf(stderr, "Unable to redirect stdout to %s\n", filename);
  exit(err);
}
printf("This text is being writen to the file %s.\n", filename);
fclose(stdout);

