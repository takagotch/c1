//wctrans(), towlower(), towupper()
//
#include <wctype.h>
wint_t towctrans(wint_t wc, wctrans_t desc);

wctrans_t mapping = wctrans("toupper");

wint_t before = L"\0";
while((before = getwcahr()) != WEOF)
{
  wint_t after = towctrans(before, mapping);
  putwchar(after);
  if(after == L'Q')
  {
    break;
  }
}

