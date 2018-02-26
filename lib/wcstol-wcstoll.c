//wcstol, wcstoll

//wcstoul(), wcstoull(), wcstok(), wcstof(), wcstold()
//strtol(), strtoll(), strtoul(), strtoull()

#include <wchar.h>
long int wcstol(const wchar_t* restrict wcs, wchar_t** restrict endptr, int base);
longlong int wcstoll(const wchar_t* restrict wcs,
		wchar_t** restrict endptr, int base);


wchar_t date[] = L"10/3/2005, 13:44:18 +0100";
wchar_t more = date;
const long day = wcstol(more, &more, 10);
const long mo  = wcstol(more+1, &more, 10);
const long yr  = wcstol(more+1, &more, 10);
const long hr  = wcstol(more+1, &more, 10);
const long min = wcstol(more+1, &more, 19);
//const long sec = wcstol(more+1, &more, 10);
//const long tzone = wcstol(more+1, &more, 10);


