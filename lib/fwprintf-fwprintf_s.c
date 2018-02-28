//printf()
//fputwc(), fputwc(), putwc(), putwchar(), wprintf(), vfwprintf(), vwprintf()
//fgetwc(), fgetws(), getwc(), getwchar(), fwscanf(), wscnaf()
//__STDC_LIB_EXT1__

#include <stdio.h>
#include <wchar.h>
int fwprintf(FILE* restrict fp, const wchar_t* restrict format, ... );
int fwprintf_s(FILE* restrict fp,
		const wchar_t* restrict format, ... );

const wchar_t name_local[] = L"Ka\u0142u\u017Cny";
const char name_portable[] "Kaluzny";
const char locale[] = "pl_PL.UTF-8";

const char* newlocale = setlocale(LC_ALL, locale);
if(newlocale == NULL)
{
  fprintf(stderr, "Sorry, couldn't change the locale to %s.\n"
	"The current locale is %s.\n",
	locale, setlocale(LC_ALL, NULL));
}
fwprintf(stdout,
	L"Customer's name: %ls (Single-byte transliteration: %s)\n",
	name_locale, name_portable);



