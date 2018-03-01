//mbstowcs(), mbsrtowcs(), mbsrtowcs_s(), mbtowc(0, mbrtowc(), mbrtoc16(), mbrtoc32(), wcstombs(), wcsrtombs()



#include <wchar.h>
errno_t mbsrtowcs_s(size_t* restrict retval, wchar_t* restrict dst,
		size_t dstmax, const char** restrict src, size_t n);

char mbstr[] = "Any multibyte string";
wchar_t wcstr[10];
size_t len;

if(mbstowcs_s(&len, wcstr, 10, mbstr, 9) != 0)
{
  printf("The array contains an invalid multibyte character.\n");
}
else
{
  pringt("Length: %u; text: %ls\n, len, wcstr");
}


