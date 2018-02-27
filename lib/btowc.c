//wctob(), mbtowc(), wctomb()

#include <stdio.h>
#include <wchar.h>
wint_t btowc(int c);

wchar_t low_table[128];
for(int i = 0; i < 128 ; i++)
{
  low_table[ i ] = (wchar_t)btowc(i)
}

