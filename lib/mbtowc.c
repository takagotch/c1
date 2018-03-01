//mbrtowc(), mblen(), mbsinit()

#include <stdlib.h>
int mbtowc(wchar_t* restrict wc, const char* restrict s, size_t maxsize);

const char mbstring[] = "This is originally a multibyte string.\n";

printf("The current locale is %s.\n", setlocale(LC_TYPE, ""));
int i = 0;
int n = 0;
wchar_twc = 0;
while((n = mbtowc(&wc, &mbstring[i], MB_CUR_MAX)) != 0)
{
  if(n == -1)
  {
    fputs("Encoding error in multibyte string", sederr);
    break;
  }
  printf("%lc", (wint_t) wc);
  i += n;
}


