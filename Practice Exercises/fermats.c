#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int raiseToPow (int base, int power) 
{
  int result = pow(base,power);
  return result;
}

void checkFermat(int a, int b, int c, int n) {
    if (n <= 2) {
        printf("No, that doesn't work.\n");
    } else {
        if (raiseToPow(a, n) + raiseToPow(b, n) == raiseToPow(c, n)) {
            printf("Holy smokes, Fermat was wrong!\n");
        } else {
            printf("No, that doesn't work.\n");
        }
    }
}

int main(void)
{  
    int a, b, c, n;
    printf("%i\n", raiseToPow(2,3));
    checkFermat(3, 4, 5, 2);
    checkFermat(1, 2, 3, 3);
    checkFermat(3, 3, 9, 2);

    return(EXIT_SUCCESS);
}

