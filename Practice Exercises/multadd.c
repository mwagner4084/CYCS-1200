#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Multadd(double a, double b, double c, char mult, char add, char equal)
{
      printf("%f", a);
      printf("%c", mult);
      printf("%f", b);
      printf("%c", add);
      printf("%f", c);
      printf("%c", equal);

      return (a*b+c);

}

int main(void)
{
      double a = 1.0;
      double b = 2.0;
      double c = 3.0;
      char mult = '*';
      char add = '+';
      char equal = '=';

      printf("%d\n", Multadd(a, b, c, mult, add, equal));


      return(EXIT_SUCCESS);
}