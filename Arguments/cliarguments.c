/* We'll use this program to explore the main function input
parameters argc and argv */

// Use stdio for cli output and stdlib for exit status
#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]) { 

// Let's print the command line argument count and the first argument
  printf("There are %d arguments.\n", argc);
  printf("The first arguments is: %s\n", argv[0]);

// Now we'll use a loop to print all of the arguments
  for(int i = 0; i < argc; i++) {
    printf("Argument %d: %s\n", i, argv[i]);
  }

// Here we end the program, indicating that it ran successfully
  return(EXIT_SUCCESS);
}
