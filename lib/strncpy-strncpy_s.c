//strcpy(), memcpy(), memmove(), wcsncpy(), wmemcpy(), wmemove()
//__STDC_LIB_EXT1__
//
#include <string.h>
char* strncpy(char* restrict dest, const char* restrict src, size_t n);
errno_t strncpy_s(char* restrict dest, rsize_t destmax,
		  const char* restrict src, rsize_t n);

//src dest destmax n RSIZE_MAX
//n || src =< destmax
// copy

#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>
char dest[5], src[] = "okay";
int r;
r = strncpy_s(dest, 2, src, 2); //r != 0, dest[0] == '\0'
r = strncpy_s(dest, 3, src, 2); //r == 0, dest == "ok"
r = strncpy_s(dest, 5, src, 10); //r == 0, dest == "okay"


