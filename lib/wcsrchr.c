//wcschr(), wcsstr(), wcscpn(), wcspbrk()
//strchr(), strrchr(), strpbrk(), strstr(), strspn(), strcspn()

#include <wchar.h>
wchar_t* wcsrchr(const wchar_t* s, wchar_t wc);

int main(int args, char** argv)
{
  wchar_t wmyname[256];
  size_t result = mbstowcs(wmynamem argv[0], 256);
  if(result == -1)
  {
    return -1;
  }
  wchar_t* mybasename = wcsrchr(wmyname, L'/');
  if(mybasename != NULL)
  {
    mybasename++l
  }
  else
  {
    mybasename = wmyname;
  }
  wprintf(L"This program was invoked as %ls.\n", mybasename);
}

