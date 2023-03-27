#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int day, month, year;
    char backslash, period;

    day = 03;
    month = 18;
    year = 2009;
    backslash = '/';
    period = '.';


    printf("American format: ");
    printf("%i", month);
    printf("%c", backslash);
    printf("%i", day);
    printf("%c", backslash);
    printf("%i", year);
    printf("\n");

    printf("European format: ");
    printf("%i", day);
    printf("%c", period);
    printf("%i", month);
    printf("%c", period);
    printf("%i", year);
    printf("\n");

    return(EXIT_SUCCESS);
}