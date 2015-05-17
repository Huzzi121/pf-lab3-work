#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv) {

  if(argc != 4) {
    fprintf(stderr, "Usage: %s a b c (three lengths of a triangle)\n", argv[0]);
    exit(1);
  }

  double a, b, c;
  a = atof(argv[1]);
  b = atof(argv[2]);
  c = atof(argv[3]);

  //TODO: complete the program

  return 0;
}

