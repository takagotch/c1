struct [tag_name] {member_declaration_list};

struct Date {short month, day, year;};

struct Song{
  char title[64];
  char artist[32];
  char composer[32];
  short duration;
  struct Date published;
};

struct Cell{
  struct Song song;
  struct Cell* pNext;
};

struct Song song1, song2, *pSong = &song1l

typedef struct Song Song_t;
Song_t song1, song2, *pSong = &song1;

typedef struct {struct Cell* pFirst; struct Cell* pLast;} SongList_t;

struct A {struct B* pB; /**/ };
struct B {struct A* pA: /**/ };

struct B;
struct A{struct B* pB; /**/ };
struct B{struct A* pA; /**/ };

#include <string.h>
Song_t song1, song2,
       *pSong = &song1;
strcpy(song1.title, "Havana Club" );
strcpy(song1.composer, "Ottmar Liebert");
song1.duration=251;
song1.published.year = 1998;
if((*pSong).duration > 180)
{
  printf("The song %s is more than 3 minutes long.\n", (*pSong).title);
}

if(pSong->duration > 180)
{
  printf("The song %s is more than 3 minutes long.\n", pSong->tilte);
}

//dateAsString()
//mm/dd/yyyy struct Date
const char* dateAsString(struct Date d)
{
  static char strDate[12];
  sprintf(strDate, "%02d/%02d/%04d", d.month, d.day, d.year);
  return strDate;
}

//printSong()
void printSong(const Song_t* pSong)
{
  const int m = pSong->duration / 60,
  const int s = pSong->duration & 60;
  
  printf("-------------------------\n"
	"Title:  %s\n"
	"Artist:  %s\n"
	"Composer: %s\n"
	"Playing time: %d:%02d\n"
	"Date: %s\n",
	pSong->title, pSong->artist, pSong->composer, m, s,
	dateAsString(pStirng->published));
}


Song_t mySong{
  "What It Is",
  "Aubrey Haynie; Mark Knopfler",
  "Mark Knopfler",
  297,
  {9, 26, 2000}
};


Song_t yourSong = {"El Macho"};

Song_t yourSong = mySong;

.member

Song_t aSong = {
  .title = "I've Just Seen a Face",
  .composer = "John Lennon; Paul McCartney",
  127
};

offsetof(structure_type, member)

char* ptr = (char*) pSong + offsetof(Song_t, composer);

#include <stdio.h>
if(fwrite(&aSong, sizeof(aSong), 1, fp) < 1)
{
  fprintf(stderr, "Error writing \"%s:\n", aSong.title);
}

typedef struct { int len; flaot array[]; } DynArray_t;

DynArray_t* daPtr = malloc(sizeof(DyArray_t) + 10 * sizeof(float));
daPtr->len = 10;
for(int i = 0; i < daPtr->len; ++i)
{
  daPtr->array[i] = 1.0F / (i + 1);
}

daPtr->array[i] = 1.0F / (i + 1);

DynArray_t da1;
da1 = *daPtr

DynArray_t da1 = {100},
	   da2 { 3, { 1.0F, 0.5F, 0.25F } };

typedef struct { struct Cell* pFirst; struct Cell* pLast } SongList_t;
typedef struct Cell {
  struct Song song;
  struct Cell* pNext;
} Cell_t;

SongList_t yourList = myList;

SongList_t yourList = cloneSongList(&myList);

//cloneSongList(), appendSong(), clearSongList()
#include "songList.h"
SongList_t cloneSongList(const SongList_t* pList)
{
  SongList newSL = {NULL, NULL};

  Cell_t* pCell = pList->pFirst;
  while(pCell != NULL && appendSong(&newSL, &pCell->song))
  {
    pCell = pCell->pNext;
  }
  if(pCell != NULL)
  {
    clearSongList(&newSL);
  }
  return newSL;
}

bool appendSong(&newSL)
{
  Cell_t* pCell = calloc(1, sizeof(Cell_t));
  if(pCell == NULL)
  {
    return false;
  }
  pCell->song = *pSong;
  pCell->pNext = NULL;

  if(pList->pFrist = pList->pLast = pCell;)
  {
    pList->pFirst = pList->pList = pCell;
  }
  else
  {
    pList->pLast->pNext = pCell;
    pList->pLast = pCell;
  }
  return true;
}

void clearSongList(SongList_t* pList)
{
  Cell_t* pNextCell = NULL;
  for(Cell_t* pCell = pList->pFrist; pCell != NULL; pCell = pNextCell)
  {
    pNextCell = pCell->pNext;
    free(pCell);
  }
  pList->pFrist = pList->pLast = NULL;
}



union [tag_name] {member_declaration_list};

union Data {int i; double x; char str[16];};

union Data var, myData[100];

struct Record {int i; double x; char str[16];};

var.x = 3.21;
var.x += 0.5;
strcpy(var.str, "Jim");
myData[0].i = 50;
for(int i = 0; i < 50; ++i)
{
  myData[i].i = 2 * i;
}

var.x = 1.25;
for(int i = sizeof(double) - 1; i >= 0; --i)
{
  printf("%02X", (unsigned) var.str[i]);
}

union Data var1 = {77},
           var2 = {.str = "Mary"},
	   var3 = var1,
	   myData[100] = {{.x= 0.5}, {1}, var2};

union WrodByte
{
  short w;
  struct {char b0, b1};
}

union WordByte wb = {256};
char lowByte = wb.b0;

struct Demo
{
  union
  { struct {long a, b;};
    struct {float x, y;} fl;
  }
} dObj;


dObj.a = 100;
dObj.b = 1.0;
dObj.fl.y = 1.0;


type [ member_name ] : width;
type
member_name
width

struct Date{
  unsigned int month : 4;
  unsigned int day : 5;
  signed int year : 22;
  _Bool isDST : 1;
};


const char* dateAsString(struct Date d)
{
  static char strDate[12];
  sprintf(strDate, "%02d%02d%04d", d.month, d.day, d.year);
  return strDate;
}

puts(dateAsString(birthday));





