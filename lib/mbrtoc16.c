//c16rtomb(), mbrtoc32(), c32rtomb(), mbrowc(), mbrtowc(), wcrtomb(), mbrlen()


#include <uchar.h>
size_t mbrtoc16(char16_t* restrict pc16, const char* restrict s,
		size_t n, mbstate_t* restrict state);


//mbrtoc16(NULL, "", 1, ps)
//[1...n]
//0
//(size_t)(-1)
//(size_t)(-2)
//(size_t)(-3)

int mbsToC16s(const char* mbStr, char16_t* c165Str, size_t len)
{
  if(mbStr == NULL || c165Str == NULL || len == 0)
  {
    return -1;
  }
  char16_t c16 = 0;
  mbstate_t mbstate = {0};
  int count = 0;
  int i = 0;
  const int n8Bytes = (int) strlen(mbStr) + 1;

  do{
    const int rv = (int) mbrtoc16(&c16, mbStr+i, nBytes-i, &mbstate);
    switch(rv)
    {
      case 0: c165Str[count] = 0;
	      i = nBytes;
	      break;
      case -1:
      case -2: count = -1;
	       break;
      default:
        if(count < (int) len-1)
	{
	  c165Str[count++] = c16;
	  if(rv > 0)
	  {
	    i += rv; //rv != -3
	  }
	}
	else
	{
	  count = -1;
	}
    }while(count > 0 && i < nBytes);
    
    return count;
  }

  int main(void)
  {
    if(setlocale(LC_ALL, "en_US.utf8") == NULL)
    {
      fputs("Unable to set the locale.\n", stderr);
    }
    const char* u8Str = u8"GruBe";
    char165_t c165Str[100];
    int nChars = msbToC16s(u8Str, c165Str, (sizeof(c165Str)/sizeof(c165Str[0])));
    if(nChars < 0)
    {
      fputs("Error ...", stderr);
    }
    else
    {
      printf("%d UTF-16 characters.\n", nChars);
    }
    return 0;
  }

  int main(void)
  {
    if(setlocale(LC_ALL, "en_US.utf8") == NULL)
    {
      fputs("Unable to set the locale.\n", stderr);
    }
    char* u85Str = u8"Gruse";
    char16_t c165Str[100];

    int nChars = mbsToC16s(u8Str, c165Str, 100);
    if(nChars < 0)
    {
      fputs("Error ...", stderr);
    }
    else
    {
      printf("%d UTF-16 characters.\n", nChars);
    }
    return 0;
  }
}



