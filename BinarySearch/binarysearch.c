/// @file binarysearch.c
#include "binarysearch.h"
/* headers below included for debugging purposes */
#include <math.h>
#include <stddef.h>
#include <stdio.h>

/**
    * @brief Binary search algorithm
    * @param inputarray[] The array to search
    * @param size The size of the array
    * @param searchtarget The target to search for
    * @return The index of the target, or -1 if not found
*/

int binarysearch(int inputarray[], int size, int searchtarget) 
{
    int low = 0;
    int high = size - 1;
    int mid;

    while (low != high) 
    {
        mid = (low + high) / 2; 
        // printf("Low: %d, High: %d, Mid: %d\n", low, high, mid);

        if (inputarray[mid] == searchtarget) 
        {
            return mid;
        } else if (inputarray[mid] < searchtarget) 
        {
            low = mid + 1;
        } else 
        {
            high = mid - 1;
        }
    }

    if (low == high && inputarray[low] == searchtarget) 
    {
        return low;
    } else if (low == high && inputarray[high] == searchtarget) 
    {
        return high;
    } else 
    {
        return -1;
    }

    return -1;
}

int main()
{
    int i;
    int inputarray[10]={1,2,3,4,5,6,7,8,9,10};
    int arraysize = sizeof(inputarray)/sizeof(int);

    binarysearch(inputarray, arraysize, 3);
    binarysearch(inputarray, arraysize, 7);
    binarysearch(inputarray, arraysize, 10);
    binarysearch(inputarray, arraysize, 0);
    binarysearch(inputarray, arraysize, 5);
    binarysearch(inputarray, arraysize, 33454);

    printf("Number of elements: %d\n", arraysize);
    printf("Elements in array: ");
    printf("The returned value is: %d\n", binarysearch(inputarray, arraysize, 3));
    printf("The returned value is: %d\n", binarysearch(inputarray, arraysize, 7));
    printf("The returned value is: %d\n", binarysearch(inputarray, arraysize, 10));
    printf("The returned value is: %d\n", binarysearch(inputarray, arraysize, 0));
    printf("The returned value is: %d\n", binarysearch(inputarray, arraysize, 5));
    printf("The returned value is: %d\n", binarysearch(inputarray, arraysize, 33454));

    int x, y;
    x = 5;
    y = 3;
    bubswap(&x, &y);
    printf("x: %d, y: %d\n", x, y);    
}