//strchr(), strrchr(), strstr(), strcpn(), strtok(), wcspbrk()
//
#include <string.h>
char* strpbrk(const char* s1, const char* s2);


char* story = "He shouted: \"What? can't hear you!"\n";
const char separators[] = "\t\n.:?!\"";
char* start = story;
char* end = NULL;
char words[16][16];
int i = 0;

while(i < (sizeof(words)/sizeof(words[0]))
		&& (end = strpbrk(start, separators)) != NULL)
{
  if(end != start)
  {
    strcpy(words[i], start, end - start);
    words[i][end - start] '\0';
    i++;
  }
  start = end + 1;
}

puts(story);

for(int j = 0 ; j < i ; j++)
{
  puts(words[j]);
}


