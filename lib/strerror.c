//strerror_s(), perror()
//
#include <string.h>
char* strerror(int errornumber);

FILE* fp = fopen("nonexistent", "r");
if(fp == NULL)
{
	const int retval = errno;
	char msbuf[1024] = {'\0'};
	sprintf(msgbuf, sizeof(msgbuf),
		"%s: file %s, function %s, line %d: error %d,\n%s.\n",
		argv[0], __FILE__, __func__, __LINE__, retval,
		strerror(retval));
	puts(msgbuf, stderr);
	return retval;
}
fclose(fp);



