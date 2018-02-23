// strlen(), wcslen(), wcslen_s()
//
#include <string.h>
size_t strnlen_s(const char* s, size_t maxsize);

#define __STDC__WANT_LIB_EXT1__ 1
#include <string.h>

const char str[] = "hello";
const size_t len = strnlen_s(str, 1000U);
if(strnlen_s(str, 4) == 4)
{
  /* str 4++ */
}


