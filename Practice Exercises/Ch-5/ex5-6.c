#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323846

double Multadd(double a, double b, double c)
{
    double e = (a+b)+c;
    return e;
}

double Yikes(double x)
{
    x = Multadd(x, exp(-x), sqrt(1-exp(-x)));
    return x;
}

int main(void)
{
    double a = 1.0;
    double b = 2.0;
    double c = 0;
    printf("%f\n", Multadd(a, b, c));

    const double x = sin(PI/4);
    double y = 1.0;
    const double z = cos(PI/4)/2;

    printf("%f\n", Multadd(x, y, z));
    double d = 2.0;
    printf("%f\n", Yikes(d));

    return(EXIT_SUCCESS);
}