//char* decimal_point;
//char* thousands_sep;
//char* grouping;
//char* mon_decimal_point;
//
//
//
//
//
//
//
//

long long cents = 0;
wchar_t number[] = setlocale();
struct lconv* locinfo = localeenv();

if(cents >= 0)
{
  if(locinfo->p_cs_precedes)
  {
    mbstowcs();
    if(locinfo->p_sep_by_space)
    {
      wscat(prefix, L" ");
    }
  }
}

