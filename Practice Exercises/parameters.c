#include <stdio.h>
#include <stdlib.h>

void PrintTwice (char phil) 
{
    printf("%c%c\n", phil, phil);
}

int main (void)
{
   char argument = 'a';
   PrintTwice (argument);
   return EXIT_SUCCESS;
}