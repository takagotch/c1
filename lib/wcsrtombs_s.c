//
//
#include <wchar.h>
errno_t wcsrtombs_s(size_t* restrict retval,
		  char* restrict dest, rsize_t destmax,
		  const wchar_t** restrict src, rsize_t n,
		  mbstate_t* restrict state);

#define __STDC_WANT_LIB_EXT1__ 1
#include <wchar.h>

size_t mblen = 0;
char mbstr[100] = "";
wchar_t widestr[] = L"A wide-character string ... ";
const wchar_t *wcptr widestr;
mbstate_t mbstate = {0};

if(wcsrtombs_s(&mblen, mbstr, sizeof(mbstr),
		&wcptr, 3, &mbstate) == 0)
{
  printf("Multibyte length: %zu; character codes: [", mblen);
  for(size_t i = 0; i < mblen; ++i)
  {
    printf(" %X", (unsigned char)mbstr[i]);
  }
  puts(" ]");
  if(wcptr != NULL)
  {
    printf("Wide characters remaining: \"%ls\"\n", wcptr);
  }
}



