#include <stdio.h>

int main() {
    // Declare variables
    float value, increased_value;

    // Read a value from the user
    printf("Enter a value: ");
    scanf("%f", &value);

    // Calculate the increased value
    increased_value = value * 1.1;

    // Display the increased value
    printf("The increased value is R$ %.2f\n", increased_value);

    return 0;
}
