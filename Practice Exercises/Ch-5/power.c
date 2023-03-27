#include <stdio.h>
#include <stdlib.h>

double Power (double a, int b){
    if (b == 0){
        return 1;
    }
    else {
        return a * Power(a, b-1);
    }
}

int main(void)
{
    double b;
    int e;
    printf("Enter base: %lf", b);
    scanf("%lf", &b);
    printf("Enter exponent: %d", e);
    scanf("%d", &e);
    printf("pow(%lf, %d) = %lf\n", b, e, Power(b, e));
    return (EXIT_SUCCESS);
}