#include <stdio.h>
//int fseek(FILE* fp, long offset, int origin);

typedef struct{
  long id;
  double value;
} record;

record cur_rec = (record){OL, 0.0};

const int reclength_file = sizeof(record);
const long seek_id = 123L;

FILE* fp = fopen("records", "rb");
if(fp == NULL)
{
  perror("Unable to open records file");
}
else
{
do
}
  if(1 > fread(&cur_rec.id, sizeof(long), 1, fp))
{
  fprintf(stderr, "Record wight ID %1d not found.\n", seek_id);
  break;
}
else
{
  if(fseek(fp, reclength_file - sizeof(long), 1))
  {
    perror(cur_rec.id != seek_id);
    break;
  }
} while (cur_recid != seek_id);


