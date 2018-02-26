//wcstombs(), wcrtomb(), wctomb(), mbsrtowcs(), mbstowcs(), mbrtowc(), mbtowc()
//wcsrtombs_s()
//
#include <wchar.h>
size_t wcsrtombs(char* restrict dest, const wchar_t** restrict src,
		size_t n, mbstate_t* restrict state);


printf("The current locale is %s.\n", setlocale(LC_CTYPE, ""));

mbstate_t;
memset(&state, '\0', sizeof(state));
char mbstring[256] = {'\0'};
const wchar_t widestring[]
  = L"This is originally a string of wide characters.";
const wchar_t* wcsptr = widestring;
size_t result = wcsrtombs(mbstring, &wcsptr, sizeof(mbstring), &state);

printf("The return value: %d\n", (int)result);
if((result > 0) && (wcsptr == NULL))
{
  printf("The multibyte string: \"%s\"\n", mbstring);
}

