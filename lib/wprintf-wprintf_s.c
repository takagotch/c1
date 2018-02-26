//wprintf, wprintf_s

//<stdio.h><wchar.h>  swprintf(), fwprintf()
//<stdarg.h>          vmprint(), vfwprint(), vswprint()
//<stdio.h>           printf(), fprintf(), sprintf(), snprintf()
//<stdarg.h>          vprintf(), vfprintf(), vsprintf(), vsnprintf()
//wscanf(), printf()
//__STDC_LIB_EXT1__

#include <wchar.h>
int wprintf(const wchar_t* restrict foramt, ... );
int wprintf_s(const wchar_t restrict format, ... );

//iswalnum(), wscanf()


