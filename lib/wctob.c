//wctomb(), wcrtomb(), wcstombs(), wcsrtombs()
//btowc(), mbtowc(), mbrtowc(), mbstowcs(), mbsrtowcs()

#include <stdio.h>
#include <wchar.h>
int wctob(wint_t wc);

FILE* fp_inwide;
wchar_t wc;
int bc;

fwide(fp_inwide, 1);
while((wc = fgetwc(fp_inwide)) != WEOF)
{
  if((bc = wctob(wc)) != EOF)
  {
    fput(c, stdout);
  }
  else
  {
    fput('?', stdout);
  }
}


