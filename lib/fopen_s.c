//
#include <stdio.h>
errno_t fopen_s(FILE* restrict * restrict streamPtr,
		const char* restrict name, const char* restrict mode);

#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>

FILE* fp;
const char filename[] = "new.txt";

errno_t err = fopen_s(&fp, filename, "w+x");
if(err != 0)
{
  fprintf(stderr, "Unable to create the file \"%s\".\n", filename);
  exit(err);
}


