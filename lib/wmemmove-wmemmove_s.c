//wmemmove, wmemmove_s

//wmemcpy(), wcsncpy()
//memmove(), memcpy(), strncpy()
//__STDC_LIB_EXT1__

#include <wchar.h>
wchar_t* wmemmove(wchar_t* dest, const wchar_t* src, size_t n);
errno_t wmemmove_s(wchar_t* dest, rsize_t destmax, const wchar_t* src, rsize_t n);

#define LINESIZE 2048 //wchar_t


