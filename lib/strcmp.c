//strcmp(), memcmp(), wcsmp()
//
#include <string.h>
int strcmp(const char* s1, const char* s2);

// 0 =,<=,>=
//
char word1[256];
char word2[256];

int result = 0;
while(result < 2)
{
  puts("Type two words, please.");
  result = scanf("%s%s", word1, word2);
}
result = strcmp(word1, word2);

const char* greaterlessequal = NULL;
if(result < 0)
{
  greatelessequal = "less than";
}
else if(result > 0)
{
  greatelessequal = "greater than";
}
else
{
  greaterlessequal = "the same as";
}
printf("The word \"%s" is %s the word \"%s\".\n",
	word1, greaterlessequal, word2);
//qsort()


