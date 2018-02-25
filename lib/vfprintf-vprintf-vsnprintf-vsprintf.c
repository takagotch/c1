//va_start(), va_arg(), va_copy(), va_end()
//fprintf(), printf(), sprintf(), snprintf()
//vfwprint(), vwprint(), vswprint()
//__STDC_LIB_EXT1__
//
#include <stdio.h>
#include <stdarg.h>
int vfprintf(FILE* restrict fp, const char* restrict format, va_list argptr);
int vprintf(const char* restrict format, va_list argptr);
int vsprintf(char* restrict buffer, const char* restrict format, va_list argptr);
int vsnprintf(char* restrict buffer, size_t n,
		char* restrict format, va_list argptr);


statuc FILE* fp_log = NULL;
static void write_log(const char* function_name, unsigned int line_num,
		const char* format_str, ...)
{
  if(fp_log == NULL)
  {
    return;
  }

  time_t timestamp = time(NULL);

  va_list argptr;
//argptr option arg first
  va_start(argptr, format_str);
//timestamp, func, line
  fprintf(fp_log, "%.8s %s (line %u)",
	  ctime(&timestamp)+11, function_name, line_num);
//msg
  vfprintf(fp_log, format_str, argptr);

  va_end(argptr);
}

static void myFunc(const int param)
{
  write_log(__func__, __LINE__, "param = %d\n", param);
}



