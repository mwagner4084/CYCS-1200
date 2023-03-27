#include <stdio.h>
#include <stdlib.h>

int PrintDateAmerican(int month, int day, int year, char backslash)
{
      printf("%i", month);
      printf("%c", backslash);
      printf("%i", day);
      printf("%c", backslash);
      printf("%i", year);
      printf("\n");
}

int PrintDateEuropean(int day, int month, int year, char backslash)
{
      printf("%i", day);
      printf("%c", backslash);
      printf("%i", month);
      printf("%c", backslash);
      printf("%i", year);
      printf("\n");
}

int main(void)
{
      int month, day, year;
      char backslash;

      day = 29;
      month = 3;
      year = 2009;
      backslash = '/';

      PrintDateAmerican(month, day, year, backslash);
      PrintDateEuropean(day, month, year, backslash);

      return(EXIT_SUCCESS);
}