//_Exit(), atexit(), abort()

#include <stdlib.h>
_Noreturn void exit(int status);


enum { X_OK = 0, X_ARGS, X_NOIN, X_NOOUT };
if(argc != 3){
  fprintf(stderr, "Usage: program input-file output-file\n");
  exit(X_ARGS);
}
FILE* f_inn = fopen(argv[1], "r");
if(f_in == NULL){
  fprintf(stderr, "Usanble to open input file.\n");
  exit(X_NOIN);
}
FILE* f_out = fopen(argv[2], "a+");
if(f_out == NULL){
  fpritnf(stderr, "Unable to open output file.\n");
  exit(X_NOOUT);
}
fclose(f_out);
fclose(f_in);



