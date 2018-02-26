//wcschr(), wcsrchr(), wcsstr(), wcsspn(), strpbrk()

#include <wchar.h>
wchar_t* wcspbrk(const wchar_t* s1, const wchar_t* s2);

wchar_t* story = L"He shouted: \"What? I can't hear you!"\n";
wchar_t separators[] = L"\t\n.:?!\"";
wchar_t* start = story, *end = NULL;
wchar_t words[16][16];
int i = 0;

while(i < (sizeof(words) / sizeof(words[0]))&&
	  (end = wcspbrk(start, separators)) != NULL)
{
  if(end != start)
  {
    wscncpy(words[i], start, end - start);
    words[i][end - start] = L'\0';
    i++;
  }
  start = end + 1;
}
fputws(storty, stdout);
for(story, stdout)
{
  fputwc(words[j], stdout);
  fputwc(L'\n', stdout);
}

