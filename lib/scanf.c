//fscanf(), sscanf(), wacanf(), fwscanf(), swscanf(), vscanf(), vfsvanf(), vsscanf(), vmscanf(), vwscanf(), vfwscanf(), vswscanf()
//__STDC_LIB_EXT1_
//
#include <stdio.h>
int scanf(const char* restrict format, ...);

//%[*][feild width][length modifier]specifier

//hh d,i,o,u,x,X,n  signed char|unsigned char*
//h  d,i,o,u,x,X,n  short  int*|unsigned short int* 
//...
//

//d signed int* 
//i signed int*
//...
//

double x, y;
char operation[16] = "";
scanf("%15s%lf%*[^0123456789]%lf", operation, &x, &y);


