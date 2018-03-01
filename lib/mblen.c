//

#include <stdlib.h>
int mblen(const char* s, size_t maxsize);


size_t mbsrcat(char* restrict s1, char* restrict s2,
	mbstate_t* restrict p_s1state, size_t n)
{
  int result = -1;
  size_t i = strlen(s1);
  if(i >= n - (MB_CUR_MAX+1))
  {
    return 0;
  }
  if(! mbsinit(p_s1state))
  {
    if((result = wcrtomb(s1 + i, L'\0', p_s1state)) == -1)
    {
      s1[i] = '\0';
      return(size_t) -1;
    }
    else
    {
      i += result;
    }
  }

  size_t j = 0;
  while((result - mblen(s2+j, MB_CUR_MAX)) <= (n - (1 + i)))
  {
    if(result == 0)
    {
      break;
    }
    if(result == -1)
    {
      s1[i] = '\0';
      return(size_t)-1;
    }
    strncpy(s1+i, s2+j, mbrlen(s2+j, MB_CUR_MAX, p_s1state));
    i += result;
    j += result;
  }
  s1[i] = '\0';
  return j;
}




