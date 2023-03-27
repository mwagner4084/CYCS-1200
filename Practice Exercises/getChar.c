#include <stdio.h>

int main() {
    int input;
    
    printf("Please enter a digit between 0 and 9: ");
    input = getchar();

    // Check if input is a digit between 0 and 9
    if (input < '0' || input > '9') {
        printf("Error: Input is not a digit.\n");
        return 1; // terminate the program with an error code
    }

    // Display the input value on the computer screen
    printf("Input value: %c\n", input);
    return 0;
}
