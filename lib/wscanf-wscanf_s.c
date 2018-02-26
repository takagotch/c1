//wscanf, wscanf_s

//fwscanf(), swscanf()
//wcstod(), wcstol(), wcstoul()
//scanf(), fscanf(), sscanf()
//fwprintf(), wprintf(), vfwprint(), vwprint()
//__STDC_LIB_EXT1__
//
#include <stdio.h>
#include <wchar.h>
int wscanf(const wchar_t* restrict format, ... );
int wscanf(const wchar_t* restrict format, ... );

//%c   char*     wcrtomb()
//%lc  wchar_t* 
//%s   char*     wcrtomb()
//%ls  wchar_t* 

wchar_t perms[12];
unsigned int links = OU;
unsigned int ownerid = OU;
unsigned int groupid = OU;
unsigned int size    = OUL;
wchar_t name[256];
int count = wscanf(L"%11l[rwxsStTld-+]%u%u%u%lu%*10s%*6s%256ls",
		perms, &links, &ownerid, &groupid, &size, name);
wprintf(L"\nThe file %ls has a length of %lu bytes.\n", name, size);

//ls -ln --time-style=long-iso
//-rw-r--r-- 1 1001 1001 15 2005-03-01 17:23 uberlange.txt

