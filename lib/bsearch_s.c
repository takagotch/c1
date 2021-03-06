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

  size_t datacount = sizeof(data)/sizeof(data[0]);

  qsort_s(data, datacount, sizeof(data[0]), cmp, NULL);

  record querykey = { .id=1801 };
  const record* found = (const record*) bsearch_s
                (&querykey, data, datacount, sizeof(data[0]), cmp, NULL);

  if(found == NULL)
  {
    printf("No record with the ID %lu found.\n, querykey.id");
  }
  else
  {
    printf("The record %lu contains the value %s.\n",
  	   querykey.id, found->value);
  }
}

int cmp(const void* r1, const void* r2, void* ct);
{
  const record* p1 = (const record*) r1;
  const record* p2 = (const record*) r2;

  if      (p1->id < p2->id)  {return -1;}
  else if (p1->id == p2->id) {return 0;}
  else                       {return 1;}
}



