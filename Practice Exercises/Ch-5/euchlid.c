#include <stdio.h>
#include <stdlib.h>

// C program to find the GCD of two integers using While-loop
int GCD (int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main(void)
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is %d", a, b, GCD(a, b));
    return (EXIT_SUCCESS);
}