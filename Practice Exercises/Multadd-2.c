#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Multadd(double a, double b, double c)
{
      double result = a*b+c;
      return result;
}

double Yikes(double x)
{
      double result = Multadd(x,exp(-x), sqrt(1-exp(-x)));
      return result;
}

int main(void)
{
      double a = 1.0;
      double b = 2.0;
      double c = 3.0;
      double x = 2.0;

      printf("%f\n", Multadd(a, b, c));
      printf("%f\n", Yikes(x));


      return(EXIT_SUCCESS);
}