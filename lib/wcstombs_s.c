//wcstombs(), wcsrtombs(), wctombs(), wcrtomb(), mbstowcs(), mbsrtowcs(), mbtowc(), mbrtowc()

#include <stdlib.h>
errno_t wcstombs_s(size_t* restrict reval, char* restrict dest, rsize_t destmax,
		const wchar_t* restrict src, rsize_t n);

#define __STDC_WANT_LIB_EXT1__ 1
#include <stdlib.h>

wchar_t widestr[] = L"A wide-character string ... ";
char mbstr[100] = "";
size_t mblen = 0;
printf("The current localis %s.\n", setlocale(LC_CTYPE, ""));
if(wcstombs_s(&mblen, mbstr, sizeof(mbstr), widestr, 5) == 0)
{
  printf("Multibyte length: &u; text: \"%s\"\n", mblen, mbstr);
}

