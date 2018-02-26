//wcstoul, wcstoull

//wcstol(), wcstod(), wcstof(), wcstold()
//strtol(), strtoul()

#include <wchar.h>
unsigned long int wcstoul(const wchar_t* restrict wcs,
		wchar_t** restrict endptr, int base)
unsigned long long int wcstoull(const wchar_t* restrict wcs,
		wchar_t** restrict endptr, int base);

//wcstol()
