//fgetc(), getchar(), fputc(), putc(), putchar(), ungetc()
//getwc(), fgetwc(), getwchar(), putwc(), fputwc(), putwchar(), ungetwc()

#include <stdio.h>
int getc(FILE* fp);

FILE* inputs[16];
int i = 0;
do {
  int nextchar = getc(inputs[i++]);
} while(i < 16);

for(int i = 0; i < 16; i++){
  int nextchar = getc(input[i]);
}

