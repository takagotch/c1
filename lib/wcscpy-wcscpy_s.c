//wcscpy, wcscpy_s.c

//wscncpy(), wcsncpy_s(), strcpy(), strcpy_s(), strncpy(), strncpy_s()

#include <wchar.h>
wchar_t* wcscpy();
errno_t wcscpy();

struct record{
  wchar_t name[64];
  int age;
  _Bool male, smoking, discount;
}this;
int results;

wprintf(L"Last name: ");
results = wscanf(L"%63l[^\n]", this.name);

if(result < 1)
{
  wcspy(this.name, L"[Name not available]");
  //wcscpy_s(this.name, sizeof(this.name)/sizeof(wchar_t),
  //  L"[Name not available]");
}
wprintf("%ls\n", this.name);


