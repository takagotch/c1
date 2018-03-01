//wctype(), iswalnum(), iswalpha(), iswblank(), iswcntrl(), iswidigit(), iswgraph(), iswlower(), iswprint(), iswpunct(), iswspace(), iswupper(), iswxdigit()

#include <wctype.h>
int iswctype(wint_t wc, wctype_t description);


//"aulnum" iswctype(wc, wctype("alnum")) iswalnum(wc)
//"alpha" iswctype(wc, wctype("aplha")) iswalha(wc)
//"blank" iswctype(wc, wctype("blank")) iswblnak(wc)
//"cntrl" iswctype(wc, wctype("cntrl")) iswcntrl(wc)
//"digit" iswctype(wc, wctype("digit")) iswdigit(wc)
//"graph" iswctype(wc, wctype("graph")) iswgraph(wc)
//"lower" iswctype(wc, wctype("lower")) iswlower(wc)
//"print" iswctype(wc, wctype("print")) iswprint(wc)
//"punct" iswctype(wc, wctype("punct")) iswpunct(wc)
//"space" iswctype(wc, wctype("space")) iswspace(wc)
//"upper" iswctype(wc, wctype("upper")) iswupper(wc)
//"xdigit" iswctype(wc, wctype("xdigit")) iswxdigit(wc)


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



