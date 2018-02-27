//

#include <stdlib.h>
void* bsearch(const void* key, void* array, size_t n, size_t size,
		int (*compare)(const void*, const void*));

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  unsigned long id;
  int data;
}record;

static int id_cmp(const void* s1, const void* s2);

int main(void)
{
  record recordset[] = {{}, {}, {}, {}, {}};
  const size_t recordcount = sizeof()/sizeof();
}





