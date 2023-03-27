#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FALSE 0
#define TRUE 1

int IsTriangle(int a, int b, int c)
{
    if (a >= b + c || b >= a + c || c >= a + b)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main(void)
{
    printf("%d\n", IsTriangle(3, 4, 5));
    printf("%d\n", IsTriangle(1, 2, 5));

    return (EXIT_SUCCESS);
}