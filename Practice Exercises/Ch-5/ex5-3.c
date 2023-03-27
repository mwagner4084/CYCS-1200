#include <stdio.h>
#include <stdlib.h>

int FunctionOne (int m, int n) 
{ 
    printf("m: %d, n: %d\n", m, n);
    if (m == n) 
    {
        return n;
    } 
    else 
    {
        return m + FunctionOne (m+1, n);
    }
}

int FunctionTwo (int m, int n) 
{
    printf("m: %d, n: %d\n", m, n);
    if (m == n) 
    {
        return n;
    } 
    else 
    {
        return n * FunctionTwo (m, n-1);
    }
}

int main(void)
{
    printf("output of function 1: %d\n", FunctionOne(1, 5));
    printf("output of function 2: %d\n", FunctionTwo(1, 5));


    return(EXIT_SUCCESS);
}