//strspn(), strpbrk(), strchr(), wcsspn()
//

#include<string.h>
int strcspn(const char* s1, const char* s2);

const char* path = "/usr/local/bin:/usr/bin:/user/bin/X11:/usr/games";
const char* basename = "aprogram";
char fullname[1024] = "";

int separator = strcpn(path, ":");
strncpy(fullname, path, separator);
fullname[separator] = '\0';
strncat(fullname, "/", sizeof(fullname) - strlen(fullname) -1);
strncat(fullname, basename, sizeof(fullname) - strlen(fullname) -1);

puts(fullname);


