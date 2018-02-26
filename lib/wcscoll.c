//wcscmp(), wcsncmp(), wcsxfrm()
//strcoll(), strcmp(), strncmp(), strxfrm()
//
#include <wchar.h>
int wcscoll(const wchar_t* s1, const wchar_t* s2);

wchar_t* samples[] = { L"anejo", L"aneja",};

setlocale(LC_COLLATE, "es_US.UTF-8");

wprintf(L"In the locale %s", setlocale(LC_COLLATE, NULL));

if(result == 0)
{
  wprintf(L"the wide strings \"%ls\" and \"%ls\" are alphabetically"
	  "equivalent.\n", samples[0], samples[1]);
}
else if(result < 0)
{
  wprintf(L"th wide string \"%ls\" precedes \"%ls\" "
	  "alphabetically.\n", samples[0], samples[1]);
}
else if(result > 0)
{
  wprintf(L"the wide string \"%ls\" comes after \"%ls\" "
	  "alhabetically.\n", samples[0], samples[1]);
}



