#include <stdio.h>

int main() {
    // Declare variables
    int number, predecessor, successor;

    // Read a number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Calculate the predecessor and successor
    predecessor = number - 1;
    successor = number + 1;

    // Display the predecessor and successor
    printf("Predecessor: %d\n", predecessor);
    printf("Successor: %d\n", successor);

    return 0;
}
