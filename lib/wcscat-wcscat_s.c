//wcscat, wcscat_s

//wcsncat(), wcsncat_s(), strcat(), strcat_s(), strncat(), strncat_s()

#include <wchar.h>
wchar_t* wcscat(wchar_t* restrict s1, const wchar_t* restrict s2);
errno_t wcscat_s(wchar_t* restrict s1, rsize_t s1max,
		const wchar_t* restrict s2);

typedef struct{
  wchar_t lastname[32];
  wchar_t firstname[32];
  _Bool   ismale;
}Name;

Name* newName = (Name*) calloc(1, sizeof(Name));

wchar_t displayname[80];
wcscpy(displayname, (newName->ismale ? L"Mr. " : L"Ms. "));
wcscat(displayname, newName->firstname);
wcscat(displayname, L" ");
wcscat(displayname, newName->lastname);
wcscat(displayname, L"\n");

//wcscat_s(displayname, sizeof(displayname), newName->firstname);
//wcscat_s(displayname, sizeof(displayname), L" ");
//wcscat_s(displayname, sizeof(displayname), newName->lastname);
//wcscat_s(displayname, sizeof(displayname), L"\n");
fputws(displayname, stdout);


