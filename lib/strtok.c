//strtok_s(), strspn(), strcspn(), strstr(), wcstok()
//
#include<string.h>
char strtok(char* restrict s1, const char* restrict s2);

char line[] = " mul eax,[ebp+4] ; Multiply by y\n";
const char* command = strtok(line, "\t");
const char* arg1 = strtok(NULL, ",");

const char* arg2 = strtok(NULL, ";\n");
const char* comment = strtok(NULL, "\n\r\v\f");
printf("Command: %s%n"
       "1st argument: %s%n"
       "2nd argument: %s%n"
       "Comment:      %s\n\n",
       command, arg1, arg2, comment);

