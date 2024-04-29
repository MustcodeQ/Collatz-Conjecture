#include <stdio.h>

void collatzSequence(int n) {
    printf("[");
    while (n != 1) {
        printf("%d, ", n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    printf("1]\n");
}

int main() {
    int userInput;

    // Get user input
    printf("Enter a positive integer: ");
    scanf("%d", &userInput);

    // Check if the input is positive
    if (userInput <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Generate and print the Collatz sequence
    collatzSequence(userInput);

    return 0; // Exit successfully
}

