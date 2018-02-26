//wcspbrk(), wcsspn(), wcscspn(), wcschr(), wcsrchr(), strstr(), strpbrk(), strspn(), strcspn(), strchr(), strrchr()
//
#include <wchar.h>
wchar_t** wcsstr(const wchar_t* s1, const wchar_t* s2);

#define MAX_LINE 1024

int main(int argc, char** argv)
{
  if(argc != 3)
  {
    wprintf(L"Syntax: %s <keyword> <filename>\n", argv[0]);
    return -1;
  }

  FILE* fpIn = fopen(argv[2], "r");
  if(fpIn == NULL)
  {
    return -2;
  }
  else
  {
    fwide(fpIn, 1);
  }

  wchar_t keyword[MAX_LINE] = {L'\0'};
  if(mbstowcs(keyword, argv[1], MAX_LINE) == -1)
  {
    return -3;
  }

  int count = 0;
  wchar_t line[MAX_LINE] = {L'\0'};
  while(fgetws(line, MAX_LINE, fpIn) != NULL)
  {
    if(wcsstr(line, keyword) != NULL)
    {
      ++count;
      fputws(line, stdout);
    }
  }
  if(! feof(fpIn))
  {
    return -4;
  }
  else
  {
    fclose(fpIn);
    return count;
  }
}


