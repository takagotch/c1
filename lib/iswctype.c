//wctype(), iswalnum(), iswalpha(), iswblank(), iswcntrl(), iswidigit(), iswgraph(), iswlower(), iswprint(), iswpunct(), iswspace(), iswupper(), iswxdigit()

#include <wctype.h>
int iswctype(wint_t wc, wctype_t description);


//"aulnum" iswctype(wc, wctype("alnum")) iswalnum(wc)
//...


setlocale(LC_TYPE, "de_DE.UTF-8");
const wint_t wc = L'B';
if(iswctype(wc, wctype("alpha")))
{
  if(iswctype(wc, wctype("lower")))
  {
    wprintf(iswctype(wc, wctype("lower")));
  }
  if(iswctype(wc, wctype("upper")))
  {
    wprintf(L"The character %lc is uppercase.\n", wc);
  }
}



