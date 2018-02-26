//wcsncat-wcsncat_s

//wcscat(), strncat(), strcat()

#include <wchar.h>
wchar_t* wcsncat(wchar_t* restrict s1, const wchar_t* restrict s2, size_t n);
errno_t wcsncat_s(wchar_t* restrict s1, rsize_t s1max,
		const wchar_t* restrict s2, rsize_t n);
//strncat(), wcscspn()



