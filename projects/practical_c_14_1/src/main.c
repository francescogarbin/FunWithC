#include <stdio.h>
#include <stdlib.h>

#define FOREVER 1

const char FILE_NAME[] = "input.txt";

void print_help() {
  printf("This program counts the number of characters in the file passed as argument.\n");
  printf("usage: countchars -f infile");
}

char* parse_args(int argc, char **argv) {
  return NULL;
}

int main(int argc, char **argv) {
  int count = 0;
  int ch = 0;

  char *in_path = parse_args (argc, argv);

  FILE *in_file = fopen(in_path, "r");
  if(NULL == in_file) {
    printf("Cannot open %s\n", in_path);
    exit(8);
  }

  while(FOREVER) {
    ch = fgetc(in_file);
    if(EOF == ch){
      break;
    }
    ++count;
  }

  fclose(in_file);

  printf("File %s is %d characters long.\n", FILE_NAME, count);
  return(0);
}

