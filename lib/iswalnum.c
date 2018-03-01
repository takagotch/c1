//iswalpha(), iswdigit()
//isalnum()
//iswblank(), iswcntrl(), iswgraph(), iswlower(), iswprint(), iswpunct(), iswspace(), iswupper(), iswxdigit(), setlocale()
//iswctype()

#include <wctype.h>
int iswalnum(wint_t wc);


setlocale(LC_CTYPE, "");
wprintf(L"\nThe current locale for the 'is ...' functions is '%s'.\n"
	setlocale(LC_CTYPE, NULL));
wprintf(L"These are the alphanumeric wide characters"
	" in theis locale:\n\n");
int i = 0;
for(wint_t wc = 0; wc < 1024; wc++)
{
  if(iswalnum(wc))
  {
    if(i % 25 == 0)
    {
      wprintf(L"... more ...\n");
      (void)getchar();
      wprintf(L"Wide character Code\n");
      wprintf(L"-------------------\n");
    }
    wprintf(L"%5lc %4u\n", wc, wc);
    i++;
  }
  wprintf(L"--------------------\n");
  return 0;
}


