#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Overflow
{
  char string1[4];
  char string2[4];
};

int main (int argc, char *argv[])
{
  struct Overflow ov = {"", "test"};
  printf ("string1 = %s, string2 = %s\n\n", ov.string1, ov.string2);
  printf ("Enter a 4 character string: ");
  gets(ov.string1);
  printf ("\nstring1 = %s, string2 = %s\n\n", ov.string1, ov.string2);
  if (strncmp(ov.string1, ov.string2, 4) == 0)
  {
    printf("Equal\n");
  } else {
    printf("Not Equal\n");
  }

  return(EXIT_SUCCESS);
}