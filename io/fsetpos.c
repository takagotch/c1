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
    if(key == indexTab[i].key)
    {
      break;
    }
  }
  if(i == indexLen)
  {
    break;
  }
  if(fseek(fp, indexTab[i].pos, SEEK_SET) != 0)
  {
    return NULL;
  }
  if(fseek(fp, indexTab[i].pos, SEEK_SET) != 0)
  {
    return NULL;
  }
  if(key != record.key)
  {
    return NULL;
  }
  else
  {
    cons size_t size = sizeof(record.name);
    strncpy(record.name, newname, size-1);
    record.name[size-1] = '\0';

    if(fseek(fp, indexTab[i].pos, SEEK_SET) != 0)
    {
      return NULL;
    }
    if(fwrite(&record, sizeof(Record_t), 1,  fp) != 1)
    {
      return NULL;
    }
    return &record;
  }
}


if(fseek(fp, -(long)sizeof(Record_t), SEEK_CUR) != 0)
{
  return NULL;
}





