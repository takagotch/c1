//qsort_s(), bsearch, bsearch_s()
//
#include <stdlib.h>
void qsort(void* array, size_t n, size_t size,
		int(*compare)(const void*, const void*));

int strptrcmp(const void* sp1, const void* sp2);

int main(void)
{
  const char* words[] = { "Then", "he", "shouted", "What", "I",
    "didn't", "hear", "what", "you", "said" };
  const size_t n = sizeof(words)/sizeof(words[0]);
  qsort(words, n, sizeof(words[0]), strptrcmp);
  for(int j = 0 ; j < n ; j++)
  {
    puts(words[j]);
  }
  return 0;
}

int strptrcmp(const void* sp1, const void* sp2)
{
  const char* s1 = *(char**) sp1;
  const char* s2 = *(char**) sp2;
  return strcmp(s1, s2);
}


