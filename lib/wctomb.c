//wctob(), wcrtomb(), wcstombs(), wcsrtombs()
//btowc(), mbtowc(), mbrtowc(), mbstowcs(), mbsrtows()

#include <stdlib.h>
int wctomb(char* s, wchar_t wc);

printf("The current locale is %s.\n", setlocale(LC_CTYPE, ""));
printf("The locale's multibyte encoding is %s.\n",
		(wc(NULL, L'\0') ? "stateful" : "stateless"));
const wchar_t wcs[] = L"Wir stehen auf den FUBen von Riesen";
char mbbuffer[MB_LEN_MAX] = { '\0' };
int n = 0;
int i = 0;
do{
  n += wctomb(mbbiffer, wcs[i]);
}while(wcs[i++] != L'\0');

printf("The wide string \"%ls\" \nis %zu wide characters long.\n"
	"Its multibyte representation requires a buffer of %u bytes.\n",
	wcs, wcslen(wcs), n);



