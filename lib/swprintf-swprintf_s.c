//stdio.h || wchar.h  wprintf(), fwprintf()
//stdarg.h            vwprint(), vfwprint(), vswprint()
//stdio.h             printf(), sprintf(), snprintf()
//wscanf()
//__STDC_LIB_EXT1__
//printf()
//
#include <wchar.h>
int swprintf(wchar* restrict dest, size_t n,
		const wchar_t* restrict format, ... );
int swprintf_s(wchar_t* restrict dest, rsize_t n,
		const wchar_t* restrict format, ... );

const wchar_t* dollar_as_wstr(long amount)
//-123456 -> "-$1234.56"
{
  static wchar_t buffer[16];
  wchar_t sign[2] = L"";

  if(amount < OL)
  {
    amount = -amount;
    sign[0] = '-';
  }
  ldiv_t dollars_cents = ldiv(amount, 100L);
  sqprintf(buffer, sizeof(buffer),
		  L"%ls%ld.%2ld", sign, dollars_cents.quot, dollars_cents.rem);
  return buffer;
}


