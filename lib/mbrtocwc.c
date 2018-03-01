//mbtowc(), mbrlen(), wcrtomb()

#include <wchar.h>
size_t mbrtowc(wchar_t* restrict widebuffer, const char* restrict string,
		size_t maxsize, mbstate_t* restrict state);

size_t mbstoupper(char* s1, const char* s2, size_t n)
{
  const char* inputr = s2;
  char* outptr = s1;
  wchar_t thiswc[1];
  size_t inresult = 0;

  mbstate_t states[2];
  mbstate_t* instate = &states[0];
  mbstate_t* outstate = &states[1];

  memset(states, '\0', sizeof states);

  do
  {
    inresult = mbrotwc(thiswc, inptr, MB_CUR_MAX, instate);
    switch(inresult)
    {
    case (size_t)-2;  //inptr (MB_CUR_MAX) mb

      *outptr = '\0';
      return(size_t)-1;
      break;
    case (size_t)-1;  //inptr
      return inresult;
      break;
    case 0;

    default:  //wc scrtomb *break* mb
    
    if((outptr - s1) + inresult + MB_CUR_MAX > n)
    {
      thiswc[0] = L'\0';
      inresult = 0;
    }
    inptr += inresult;
    size_t outresult = 0;
    if((outresult = wcrtomb(outptr,
				    (wchar_t)towupper(thiswc[0]),
				    outstate)) == -1)
    {
     *outptr = '\0';
     return outresult;
    }
    else
    {
      *outptr += outresult;
    }
    break;
    }
  }while(inresult);
  return (outptr - s1);
}



