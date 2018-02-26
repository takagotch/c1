//iswctype()

#include <wctype.h>
wctype_t wctype(const char* property);

if(setlocale(LC_CTYPE, "ja_JP.UTF-8") == NULL)
{
  fputwc(L"Unable to set the locale.\n", stderr);
}
wctype_t wct_kata = wctype("jkata");
if(wct_kata = 0)
{
  wprintf(L"The locale doesn't support the wide-character type"
	  "string \"jkata\".\n");
}
wchar_t wc = fgetwc(stdin);
if(iswctype(wc, wct_kata))
{
  wprintf(L"%lc is a katakana character.\n", wc);
}



