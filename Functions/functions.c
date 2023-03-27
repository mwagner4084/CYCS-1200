#include<stdio.h>
#include<stdlib.h>

int myAddition(int a, int b) {
  return a+b;
}

int main(int argc, char *argv[]) {

  printf("There are a total of %d arguments.\n", argc);

  for(int i=0; i<argc; i++) {
    printf("Argument %d: %s\n", i, argv[i]);
  }

  printf("%s + %s = %d\n", argv[1], argv[2], myAddition(atoi(argv[1]), atoi(argv[2])));

  return 0;
}
