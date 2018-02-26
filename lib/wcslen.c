//wcsnlen(), strlen(), strlen_s()
//mbtowc()

#include <wchar.h>
size_t wcslen(const wchar_t* s);

wchar_t line[1024] =
  L"This string could easily be 400 or 500 characters long."
  L"This string could easily be 400 or 500 characters long."
  L"\n";
wchar_t* readptr = line;
const int columns = 80;
while(wcslen(readptr) > columns)
{
  wprintf(L"%.*ls\\\n", columns - 1, readptr);
  readptr += columns - 1;
}
wprintf("%ls\n", readptr);


