#include <stdio.h>
#include <stdlib.h>

/* main: generate some simple output */

int main(void)
{
    //Change the value of x and re-run to see what happens
    int x = 0;
  
    if (x%2 == 0)
    {
        printf ("x is even\n");
    } 
    else 
    {
        printf ("x is odd\n");
    }
    

    return(EXIT_SUCCESS);
}
