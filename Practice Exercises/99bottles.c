#include <stdio.h>
#include <stdlib.h>

void printSong(int n);
void printVerse(int n);

void printVerse(int n) {
    if (n == 1) {
        printf("1 bottle of beer on the wall, 1 bottle of beer.\n");
        printf("Take one down and pass it around, no more bottles of beer on the wall.\n");
    } else if (n == 2) {
        printf("2 bottles of beer on the wall, 2 bottles of beer.\n");
        printf("Take one down and pass it around, 1 bottle of beer on the wall.\n");
    } else {
        printf("%d bottles of beer on the wall, %d bottles of beer.\n", n, n);
        printf("Take one down and pass it around, %d bottles of beer on the wall.\n", n-1);
    }
}

void printSong(int n) {
    if (n == 0) {
        printf("No more bottles of beer on the wall, no more bottles of beer.\n");
        printf("Go to the store and buy some more, 99 bottles of beer on the wall.\n");
    } else {
        printVerse(n);
        printSong(n - 1);
    }
}

int main() {
    printSong(99);
    return 0;
}