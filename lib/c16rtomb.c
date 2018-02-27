//mbrtoc16(), c32rtomb(), mbrtoc32(), wctomb(), wcrtomb(), wcstombs(), wcsrtombs()

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
  printf("0x%04X %lc Multibyte: [", c165tr[i], c165Str[i]);
  for(size_t j=0; j < nBytes; ++j)
  {
    printf(" 0x%02X", (unsigned char) mbChar[j]);
  }
  puts(" ]");
}

