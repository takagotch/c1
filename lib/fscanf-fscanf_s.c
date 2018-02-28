//scanf(), sscanf(), vscanf(), vfscanf(), csscanf()
//wscanf(), fwscanf(), swscanf(), vwscanf(), vfwscanf(), vswscanf()
//__STDC_LIB_EXT1__

#include <stdio.h>
int fscanf(FILE* restrict fp, const char* restrict format, ... );
int fscanf_s(FILE* restrict fp, const char* restrict format, ... );

//tony:x:1002:31:Tony Crawford,,:/home/tony:/bin/bas
struct pwrecord{
  unsigned int uid;
  unsigned int gid;
  char user[32];
  char   pw[32];
  char realname[128];
  char     home[128];
  char    shell[128];
};

const char pwfile[] = "pwfile.txt";
FILE* fp = fopen(pwfile, "r");
if(fp == NULL)
{
  perror("Opening input file");
  return -1;
}

struct pwrecord record = (struct pwrecord)
                        {UNIT_MAX, UNIT_MAX, "", "", "", "", ""};
struct pwrecord *recptr = &record;
int results = fscanf(fp, "%31[^:]%31[^:]:%u:%u:",
		recptr->user, recptr->pw, &recpt->uid, &recpt->gid);
result = fscanf_s(fp, "%31[^:]:%31[^:]:%u:%u:",
		recptr->user, sizeof(recptr->user),
		recptr->pw, sizeof(recptr->pw),
		&recpt->uid, &recpt->gid);

//tony:x:1002:31: "tony", "x" copy unsigned int 1002 31 return 4;
if(result < 4)
{
  fprintf(stderr, "Unable to parse line.\n");
  fcanf(fp, "%*[^\n]\n");
}

char gecos[256] = "";
results = fscanf(fp, "%255[^:]:", gecos);
if(result < 1)
{
  strcpy(recptr->realname, "[No real name available]");
}
else
{
  sscanf(gecos, "%127[^,]", recptr->realname);
}

result s = fscanf(fp, "%127[^:]:%127[^:]\n", recptr->home, recptr->shell);
if(result < 2)
{
  fprintf(stderr, "Unable to parse line.\n");
  fscanf(fp, "%*[^\n]\n");
}
printf("The user account %s with UID %u belongs to %s.\n",
	rectpr->user, recptr->uid, recptr->realname);

fclose(fp);




