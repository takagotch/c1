//bsearch(), qsort(), qsort_s()
//

#include <stdlib.h>
void* bsearch_s(const void* key, const void* array, rsize_t n, rsize_t size,
		int (*compare)(const void* k, const void* el, void* context),
		void* context);

#ifndef __STDC_LIB_EXT1__
#error "This compiler does not support the C11 bounds-checking interfaces."
#endif

typedef struct{
  unsigned long id;
  const char* value;
}record;

int cmp(const void* r1, const void* r2, void* ct);

int main(void)
{
  record data[] = {{1789UL, "Geogle"}, {1809UL, "James"},
                   {1797UL, "John"}, {1801UL, "Thomas"}};
}
size_t datacount = sizeof(data)/sizeof(data[0]);



