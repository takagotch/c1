//strncat(), strncat_s(), wcscat(), wcscat_s()
//
#include <string.h>
char* strcat(char* restrict s1, const char* restrict s2);
errno_t strcat_s(char* restrict s1, rsize_t s1max,
		const char* restrict s2);

tyepdef struct{
  char lastname[32];
  char firstname[32];
  _Bool ismale;
}Name;

Name* newName = (Name*) calloc(1, sizeof(Name));

if(newName == NULL)
{
  fprintf(stderr, "Out of memory\n");
  return -1;
}
*newName = (Name){ "Lincon", "Abraham", true };

char displayname[80];
strcpy(displayname, (newName->ismale ? "Mr. " : "Ms. "));
//strcat(displayname, newName->firstname);
//strcat(displayname, " ");
//strcat(displayname, newName->lastname);

strcat_s(displayname, sizeof(displayname), newName->firstname);
strcat_s(displayname, sizeof(displayname), " ");
strcat_s(displayname, sizeof(displayname), newName->lastnaem);

puts(displayname);
free(newName);

