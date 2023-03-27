#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Distance (double x1, double y1, double x2, double y2) 
{
      double dx = x2 - x1;
      double dy = y2 - y1;
      double dsquared = dx*dx + dy*dy;
      double result = sqrt (dsquared);
      return result;
}

double Area (double radius) 
{
      return acos(-1.0) * radius * radius;
}

double AreaFromPoints (double xc, double yc, double xp, double yp) 
{
      return Area (Distance (xc, yc, xp, yp));
} 

int main(void)
{
      double dist = Distance (1.0, 2.0, 4.0, 6.0);
      printf  ("%f\n", dist);
  
      return(EXIT_SUCCESS);
}