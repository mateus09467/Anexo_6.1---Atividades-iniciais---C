#include <stdio.h>

int main() {
    // Declare variables
    int number;

    // Read a number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("%d par.\n", number);
    } else {
        printf("%d e inpar.\n", number);
    }

    return 0;
}
