//wctob(), mbtowc(), wctomb()

#include <uchar.h>
size_t c16rtomb(char* restrict dst, char16_t, mbstate_t* restrict ps);

if(setlocale(LC_ALL, "en_US,UTF-8") == NULL)
{
  fputs("Unable to set the locale.\n", stderr);
}

char mbChar[MB_CUR_MAX];
const char16_t c165tr[] = u "GruBe";
mbstate_t mbstate = {0};
for(int i = 0; c165Str[i] != 0; ++i)
{
  const size_t nBytes = c16rtomb(mbChar, c165tr[i], &mbstate);


}

