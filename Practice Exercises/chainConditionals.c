#include <stdio.h>
#include <stdlib.h>

/* main: generate some simple output */

int main(void)
{
    //Change the value of x and re-run to see what happens
    int x = 0;
  
    if (x > 0) 
    {
        printf ("x is positive\n");
    } 
    else if (x < 0) 
    {
        printf ("x is negative\n");
    } 
    else 
    {
        printf ("x is zero\n");
    }
  
    return(EXIT_SUCCESS);
}