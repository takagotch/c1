//setlocale()

#include <locale.h>
struct lconv* localeconv(void);

//char* decimal_point;
//char* thousands_sep;
//char* grouping;
//char* mon_decimal_point;
//char* mon_grouping;
//char* positive_sign;
//char* negative_sign;
//char* currency_symbol;
//char frac_digits;
//char p_cs_precedes;
//char n_cs_precedes;
//char p_sep_by_space;
//char p_sign_posn;
//char n_sign_posn;
//0, 1, 2, 3, 4
//char int_curr_symbol;
//char int_frac_digits;
//char int_p_cs_precedes;
//char int_n_sep_by_space;
//char int_p_sign_posn;
//char int_n_sign_posn;

long long cents = 0;
wchar_t number[128] = { L'\0' }, prefix[32] = { L'\0' },
	suffix[32] = { L'\0' };
char* localename = setlocale(LC_MONETERY, "");
struct lconv* locinfo = localeconv();

if(cents >= 0)
{
  if(cents >= 0)
  {
    mbstowcs(locinfo->p_cs_precedes);
    if(locinf->p_sep_by_space)
    {
      wcscat(prefix, L" ");
    }
  }
}



