//wctob(), wctomb(), wcrtomb(), wcrtomb_s()

#include <stdlib.h>
errno_t wctomb_s(int* restrict status, char* restrict s, rsize_t smax, wchar_t wc);

#define __STDC_WANT_LIB_EXT1__ 1
#include <stdlib.h>

int main(void)
{
  setlocale(LC_ALL, "en_US.utf8");

  int nBytes = 0;
  char mStr[MB_CUR_MAX];
  const wchar_t wc = L'\u0381';
  //if ((nBytes = wctomb(mbStr, wc)) < 0)
  if(wctomb_s(&nBytes, mbStr, sizeof(mbStr), wc) != 0)
  {
    return -1;
  }
  printf("Wide-character code: %06x; character: '%lc'; "
	  "multibye code:", wc, wc);
  for(int i = 0; i < nBytes; ++i)
  {
    printf(" %04x", (unsigned char) mbStr[i]);
  }
  putchar('\n');
  return 0;
}

