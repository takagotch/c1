//<stdio.h>                      printf(), sprintf(), snprintf()
//<stdio.h> <stdarg.h>           vprintf(), vfprintf(), vsprintf(), vsnprintf()
//<stdio.h> <wchar.h>            vwprintf(), fwprintf(), swprintf()
//<stdio.h> <wchar.h> <stdarg.h> vwprintf(), vfwprintf(), vswprintf()
//scanf(), printf()
//__STDC_LIB_EXT1__


FILE* fp_log = fopen("example.log", "a");
if(fp_log != NULL)
{
  time_t sec;
  time(&sec);
  fprintf(fp_log, "%.24s Opened log file.\n", ctime(&sec));
}




