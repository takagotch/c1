//wscanf(), fwscanf()
//wcstod(), wcstol(), wcstoul()
//scanf(), fscanf()
//fwprint(), wprintf(), vfwprint(), vwprint()
//__STDC_LIB_EXT1__
//wcsspn()
//
#include <wchar.h>
int swscanf(const wchar_t * restrict wcs, const wchar_t * restrict format, ... );
int swscanf_s(const wchar_t* restrict wcs,
		const wchar_t * restrict format, ... );

double price = 0.0;
wchar_t wstr[] = L"Current price: $199.90";
swscanf(wstr, L"%*[^$]$%lf", price);
price *= 0.8;
printf("New price: $%.2lf\n", price);


