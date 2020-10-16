#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_help();
char* parse_args(int argc, char *argv[]);

void print_help() {
    printf("This program counts the number of characters in the file passed as argument.\n");
    printf("usage: countchars -f infile\n");
    printf("options:\n");
    printf("  -h | --help: print help\n");
}

char* parse_args(int argc, char *argv[]) {
  char *retval = NULL;
  if(3 == argc && 0 == strcmp(argv[1], "-f")) {
    retval = argv[2];
  }
  else {
    print_help ();
  }
  return retval;
}

int main(int argc, char *argv[]) {
  int count = 0;
  int ch = 0;
  char *in_path = parse_args(argc, argv);
  if(NULL != in_path) {
    FILE *in_file = fopen(in_path, "r");
    if(in_file) {
      while(EOF != (ch = fgetc (in_file))) {
        ++count;
      }
      fclose(in_file);
    }
    else {
      printf("Cannot open %s\n", in_path);
      exit(8);
    }
    printf("File %s is %d characters long.\n", in_path, count);
  }
  return(0);
}

