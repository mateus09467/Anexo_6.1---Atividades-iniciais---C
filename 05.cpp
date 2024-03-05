#include <stdio.h>

int main() {
    // Declare variables
    float salary, min_salary = 1412.0;
    int num_min_salaries;

    // Read the user's salary
    printf("Enter the value of your salary: R$ ");
    scanf("%f", &salary);

    // Calculate the number of minimum wages
    num_min_salaries = salary / min_salary;

    // Display the result
    printf("%.2f corresponds to %d salario minimos\n", salary, num_min_salaries);

    return 0;
}
