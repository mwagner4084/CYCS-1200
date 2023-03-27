#include "max.h"
#include<math.h>
/* headers below included for debugging purposes */
#include <stdio.h>

int max (int n1, int n2 )
{
   if ( n2 > n1 )  return n2;
   return n1;
}

int maxadd (int a, int b)
{
    int x = a+b;
    return x;
}

double maxsqceil (double a)
{
    double x = sqrt(a);
    double y = ceil(x);

    return y;
}

double maxavg (double a, double b, double c)
{
    double x = a+b+c;
    double y = x / 3;

    printf("The average is: %f\n", y);

    return y;
}
