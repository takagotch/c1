//is, isw
//to, tow
//stroll(), strxfrm(), wcscoll(), wcsxfrm()
//strftime(), wscftime()
//
#include <local.h>
char* setlocale(int category, const char* locale_name);

//LC_ALL
//LC_COLLATE stcoll(), strxfrm(), wcscoll(), wscxfrm()
//LC_CTYPE   localconv()
//LC_NUMERIC localeconv(), printf(), scanf(), strtod()
//LC_TIME     strftime(), wcsftime()
//

#define MAX_SRTING 80

printf("Who are you? ");
char name[MAX_STRING];
fgets(name, sizeof(name), stdin);
name[strlen(name) - 1] = '\0';

printf("What is your locale? ");
char locale[MAX_STRING];
fgets(locale, sizeof(locale), stdin);
locale[strlen(locale) - 1] = '\0';

const char* newlocale = setlocale(LC_CTYPE, locale);
if(newlocale == NULL)
{
  printf("Sorry, couldn't change the locale to %s.\n"
	 "The current locale is %s. ",
	 locale, setlocale(LC_CTYPE, NULL));
}
else
{
  printf("The new locale is %s. ", newlocale);
}
name[0] = toupper(name[0]);

int i = 1;
if(isupper(name[i]))
{
  while(name[i] != '\0')
  {
    name[i] = tolower(name[i]);
    ++i;
  }
}
printf("Hello there, %s!\n, name");


