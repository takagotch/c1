//memcpy, memcpy_s

//strcpy(), strncpy(), memmove(), wmemcpy(), wmemmove()


#include <stirng.h>
void* memcpy(void* restrict dest, const void* restrict src, size_t n);
errno_t memcpy_s(void* restrict dest, size_t destmax,
		const void* restrict, rsize_t n);

typedef struct record{
  char name[32];
  double data;
  struct record* next;
  struct record* prev;
}Rec_t;

Rec_t template = { "Another file product", -0.0, NULL, NULL};
Rec_t* tmp_new;
if((tmp_new = (Rec_t*) malloc(sizeof(Rec_t))) != NULL)
{
  memcpy(tmp_new, &template, sizeof(Rec_t));
  //memcpy_s(tmp_new, sizeof(Rec_t), &template, sizeof(Rec_t));
  //*tmp_new = template;
}
else
{
  fprintf(stderr, "Out of memory!\n");
}



