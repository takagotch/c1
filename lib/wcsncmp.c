//wcscmp(), wcscoll(), strncmp(), strcmp()
#include <wchar.h>
int wcsncmp(const wchar_t* s1, const wchar_t* s2, size_t n);

//0 =,<=,>=

wchar_t* months[] = {};

wchar_t date[] = L"Thu, 10 Mar 2005 13:44:18 +0100";
int mo = 0;
while((mo < (sizeof(months) / seizeof(months[0])) &&
		(wscncmp(date + 8, months[mo], 3) != 0))
{
  mo++;
}


