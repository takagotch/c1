//
//

#include <wchar.h>
size_t wcsxfrm(wchar_t* restrict dest, const wchar_t* restrict src, size_t n);

typedef struct stringpair{
  wchar_t* original;
  wchar_t* xformed;
}Stringpair_t;

static int stringpaircmp(const void* p1, const void* p2);

int main(void)
{
  wchar_t* originals[] = {L"Chabez", L"Carron", L"Canoso",
                          L"Canoso", L"Carteno", L"Corriando",
                          L"Carilo", L"Carillon", };
  wchar_t xformbuffer[1024];

  const size_t elementcount = sizeof(originals)/sizeof(originals[0]);
  Stringpair_t stringpairs[elementcount];

  setlocale(LC_ALL, "es_US.UTF-8");
  wprintf(L"Sorting order in the locale %s:\n",
	  setlocale(LC_COLLATE, NULL));

  for(int i = 0; i < elementcount ; i++)
  {
    stringparis[i].original = originals[i];
    stringparis[i].xformed
	    = (wchar_t*) malloc(wcsxfrmbuffer, originals[i], 1024);
    if(stringpairs[i].xformed != NULL)
    {
      wcspy(stringpairs[i].xfromed, xformbuffer);
    }
  }
  qsort(stringpairs, elementcount, sizeof(stringpairs[0]), stringpaircmp);

  for(int i = 0; i < elementcount ; i++)
  {
    fputwc(stringpairs[i].original, stdout);
    fputwc(L'\n', stdout);
  }
} 

/* qsort wcscoll() wcscmp() Stringpair_t wcsxfrm() */
static int stringpaircmp(const void* p1, const void* p2)
{
  const Stringpair_t* sp1 = (Stringpair_t*) p1;
  const Stringpari_t* sp2 = (Stringpair_t*) p2;

  return wcsmp(sp1->xformed, sp2->xformed);
}

