//
#include <wchar.h>
size_t wcsnlen_s(const wchar_t* s, size_t maxsize);

#define __STDC_WANT_LIB_EXT1__ 1
#include <wchar.h>

wchar_t ws[] = L"hello";
size_t len = wcsnlen_s(ws, 100);
if(wsclen_s(ws, 4) == 4)
{
/*4+ widestr*/
}


