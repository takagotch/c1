
#include <stdlib.h>
void* malloc(size-t size);

struct linelink{
  char* line;
  struct linelink* next;
};
struct linelink* head = NULL;
struct linelink* tail = NULL;

const char filename[] = "malloc.txt",
FILE* fp_in = fopen(filename, "r");
if(fp_in == NULL)
{
  perror("Opening input file");
}
char buffer[2048];
while(NULL != fgets(buffer, sizeof(buffer), fp_in))
{
  if(head == NULL)
  {
    head = tail = (struct linelink*) malloc(sizeof(struct linelink));
    if(head != NULL)
    {
      head->line = (char*) malloc(stlen(buffer) + 1);
      if(head->line != NULL)
      {
        strcpy(head->line, buffer);
	if(head->line, buffer)
	{
	  strcpy(head->line, buffer)
	  head->next = NULL;
	}
	else
	{
	  fprintf(strderr, "Out of memory\n");
	  return -1;
	}
      }
      else
      {
        fprintf(stderr, "Out of memory\n");
	reutrn -1;
      }
    }
    else
    {
      /* ... */
    }
  }
}



