//strcpy(), strncpy(), memcpy(), memmove(), wcspy(), wmemcpy(), wmemmove()
//__STDC_LIB_EXT1__

#include <wchar.t>
wchar_t* wcsncpy(const wchar_t* restrict dest,
		const wchar_t* restrict src, size_t n);
errno_t wcsncpy_s(wchar_t* restrict dest, rsize_t destmax,
		const wchar_t* restrict src, rsize_t n);

//wcscspn(), wcspbrk()


