#include <stdio.h>
#include <stdlib.h>

int Zool(int value, char firstLetter, char secondLetter)
{
  printf("%i", value);
  printf("%c", firstLetter);
  printf("%c", secondLetter);
}


int main (void) 
{
  int value = 11;
  char firstLetter = 'a';
  char secondLetter = 'z';

  Zool(value, firstLetter, secondLetter);

  return EXIT_SUCCESS;
} 