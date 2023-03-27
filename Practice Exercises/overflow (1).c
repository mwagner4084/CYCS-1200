#include "stdio.h"
#include <string.h>

struct Overflow
{
  char string1[5];
  char string2[5];
};

 

int main ()
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
}