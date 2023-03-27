#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int IsSingleDigit (int x)
{
    return (x >= 0 && x < 10); 
}

int main(void)
{
    
    printf("%i\n", IsSingleDigit (2));
    short bigFlag = !IsSingleDigit (17);

    return(EXIT_SUCCESS);
}