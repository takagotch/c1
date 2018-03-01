//mbsrtowcs(), mbstowcs(), mbstowcs_s(), mbtowc(), mbrtowc(), mbrtoc16(), mbrtoc32, wcstombs(), wcsrtombs()

#include <wchar.h>
errno_t mbsrtowcs_s(size_t* restrict retval,
		wchar_t* restrict dst, size_t dstmax,
		const char** restrict src, size_t n,
		mbstate_t* restrict state);

#ifndef __STDC_LIB_EXT1_-
#error "This compiler does not support the C11 bounds-checking interfaces."
#endif

size_t len;
wchar_t wcstr[10];
const char* mbptr = "Any multibyte string";
mbstate_t state = {0};

if(mbsrtowcs_s(&len, wcstr, sizeof(wcstr)/sizeof(wcstr[0]),
		&mbstr, sizeof(wcstr)/sizeof(wcstr[0])-1, &state) != 0)
{
  printf("The array contains an invalid multibyte character.\n");
}
else
{
  printf("Length: %zu; text: %ls\n", len, wcstr);
  printf("The remaining characters: %s\n", mbptr);
}


