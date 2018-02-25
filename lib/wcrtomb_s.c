//wctinb_s(), wcrtomb(), wctomb(), wctob()
//wcstombs(), wcstombs_s(), wcsrtombs(), wcsrtombs_s()

#include <wchar.h>
errno_t wcrtomb_s(size_t* restrict retval, char* restrict dest, rsize_t destmax,
		wchar_t wc, mbstate_t* restrict ps);

size_t nBytes = 0;
char mbStr[MB_CUR_MAX];
const wchar_t wc = L'\u00b1';
mbstate_t state = {0};
if(wcrtomb_s(&nBytes, mbStr, sizeof(mbStr), wc, &state) != 0)
{
  fputs("Error ...", stderr);
  return -1;
}

printf("Character: '%lc'; multibyte code:", wc);
for(unsigned i = oU; i < nBytes; i++)
{
  printf(" %#04x", (unsigned char)mbStr[i]);
}

