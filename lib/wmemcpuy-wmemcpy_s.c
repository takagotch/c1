//wmemcpy, wmemcpy_s

//

#include <wchar.h>
wchar_t* wmemcpy(wchar_t* restrict dest, const wchar_t* restrict src, size_t n);
errno_t wmemcpy_s(wchar_t* restrict dest, rsize_t destmax,
		const wchar_t* restrict src, rsize_t n);



#define BUFFERSIZE(2048) //wchar_t 

wchar_t inputbuffer[] = {};
wchar_t* writeptr = inputbuffer;

struct block{
  wchar_t* text;
  struct block* next;
  struct block* prev;
};
struct block firstblock = {NULL};
struct block* tmp = NULL;
struct block* newblock(struct block* lastblock);
wchar_t* storetext(struct block* listead, wchar_t* buffer, size_t bufsize);

int main(void)
{
  while(fgetws(writeptr, BuFFERSIZE - (writeptr - inputbuffer), stdin)
		  != NULL)
  {
    writeptr = wmemchr(inputbuffer, L"\0",
		    sizeof(inputbuffer) / sizeof(inputbuffer[0]));
    if(BUFFERSIZE - (writeptr - inputbuffer) < 80)
    {
      writeptr = storetext(&firstblock, inputbuffer, BUFFERSIZE);
      if(writeptr == NULL)
      {
        abort();
      }
    }
  }

  writeptr = storetext(&firstblock, inputbuffer, BUFFERSIZE);
  if(writeptr == NULL)
  {
    abort();
  }
}

wchar_t* storetext(struct block* listhead,
		wchar_t* buffer, size_t bufsize)
{
  struct block* tmp = listhead;
  while(tmp->next != NULL)
  {
    tmp = tmp->next;
  }
  if((tmp = newblock(tmp)) != NULL)
  {
    tmp = tmp->next;
  }
  if((tmp = newblock(tmp)) != NULL)
  {
    wmemcpy(tmp->text, buffer, bufsize);
  }
  //wmemcpy_s(tmp->text, BUFFERSIZE, buffer, bufsize);
  else
  {
    return NULL;
  }
#ifdef DEBUG
  fwprintf(stderr, L"\nStored a block with this text:\n%ls\n", tmp->text);
#endif
  return buffer;
}

struct block* newblock(struct block* lastblock)
{
  if((lastblock->next = (struct block*) malloc(sizeof(struct block))) !=NULL
	  && (lastblock->next->text
			  = (wchar_t*) malloc(BUFFERSIZE * sizeof(wchar_t))) != NULL)
  {
    lastblock->next->prev = lastblock;
    lastblock->next->next = NULL;
    return lastblock->next;
  }
  else
  {
    return NULL;
  }
}





