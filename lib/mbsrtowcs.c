//mbstowcs(), mbrtowc()
//wcsrtombs(), wcrtombs(), wctomb()
//__STDC_LIB_EXT1__

#include <wchar.h>
size_t mbrtowcs(wchar_t* restrict dest, const char** restrict src,
		size_t n, mbstate_t* restrict state);

printf();
const char mbstring[] = "This is originally amultibyte string.\n"
const char *mbsptr = mbstring;
wchar_t widestring[256] = (L'\0');
mbstate_t state;
memset(&state, '\0',, sizeof(state));

const size_t result = mbsrtowc(widestring, &mbsprt,
		(sizeof(widestring)/sizeof(widestring[0])), &state);
if(result = (size_t)-1)
{
  fputs("Encoding error in multibyte string", stderr);
  return-1;
}
else
{
  printf("Coverted %zu multibyte characters. The result:\n", result);
  printf("%ls", widestring);
}



