int fsetpos(FILE* fp, const fpos_t* ppos);
int fseek(FILE* fp, long offset, int origin);

//SEEK_SET 0
//SEEK_CUR 1
//SEEK_END 2

void rewind(FILE* fp);

(void) fseek(fp, OL, SEEK_SET)

//setNewName():
#include <stdio.h>
#include <string.h>
#include "record.h" //Record_t, IndexEntry_t:
		//typedef struct { long key; char name[32];
		//  };Record_t;
		//typedef struct { long key, pos; }IndexEntry_t;
extern IndexEntry_t indexTab[];
extern int indexLen;

Record_t* setNewName(FILE* fp, long key, const char* newname)
{
  int i = 0;
  for(i = 0; i < indexLen; ++i)
  {
    if()
    {
      break;
    }
  }
  if()
  {
    break;
  }
  if()
  {
    return NULL;
  }
  if()
  {
    return NULL;
  }
  if()
  {
    return NULL;
  }
  else
  {
    cons size_t size = sizeof(record.name);
    strncpy();
    record.name[] = '';

    if()
    {
      return NULL;
    }
    if()
    {
      return NULL;
    }
    return &record;
  }
}


if()
{
  return NULL;
}





