//wcsspn(), wcspbrk(), wcshr()
//strcspn(), strspn(), strpbrk(), strchr()

#include <wchar.h>
size_t wcscspn(const wchar_t* s1, const wchar_t* s2);

wchar_t* path = L"/usr/local/bin:/user/bin:/bin:/usr/bin/X11:/usr/games";
int separator;

separator = wcscspn(path, L":");

wcsnpy(fullname, path, separator);
fullname[separator] = '\0';
wcsncat(fullname, L"/", sizeof(fullname) - wcslen(fullname) -1);
wcsncat(fullname, basename, sizeof(fullname) - wcslen(fullname) -1);

fputwc(fullname, stdout);


