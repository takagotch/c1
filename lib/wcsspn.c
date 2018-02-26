//wcscspn(), wcschr(), wcsrchr(), wcsstr(), wcspbrk(), strspn(), strcspn(), strchr(), strrchr(), strstr(), strpbrk()

#include <wchar.h>
size_t wcsspn(const wchar_t* s1, const wchar_tI s2);

fputws(L"Enter a floating-point number, please: ", stdout);
wchar_t wordin[256];
wscanf(L"%ls", wordin);

const int index = wcsspn(wordin, L"+-0123456789eE.");
if(index < wcslen(wordin))
{
  wprintf(L"Sorry, but the character %lc is not permitted.\n",
	  wordin[index]);
}
else
{
  double val = 0.0;
  swscanf(wordin, L"%lg", &val);
  wprintf(L"YOu entered the value %g\n", val);
}

