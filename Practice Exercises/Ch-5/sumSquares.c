#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double SumSquares(double a, double b)
{
   return pow(a, 2.0) + pow(b, 2.0);
}

double Distance(double x1, double y1, double x2, double y2)
{
    printf("Sum :%f\n", SumSquares(x2 - x1, y2 - y1));
    return sqrt(SumSquares(x2 - x1, y2 - y1));
}


int main(void)
{
    double dist = Distance(0.0, 0.0, 3.0, 4.0);
    printf("Distance: %f\n", dist);

  
    return(EXIT_SUCCESS);
}