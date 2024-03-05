#include <stdio.h>

int main() {
    // Declare variables
    char name[50];
    int age;
    float grade1, grade2, grade3, grade4, average;

    // Read name, age, and grades
    printf("Enter the name of the student: ");
    scanf("%s", name);
    printf("Enter the age of the student: ");
    scanf("%d", &age);
    printf("Enter the first grade: ");
    scanf("%f", &grade1);
    printf("Enter the second grade: ");
    scanf("%f", &grade2);
    printf("Enter the third grade: ");
    scanf("%f", &grade3);
    printf("Enter the fourth grade: ");
    scanf("%f", &grade4);

    // Calculate the average grade
    average = (grade1 + grade2 + grade3 + grade4) / 4;

    // Display name, age, grades, and average
    printf("\nStudent information:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Grades: %.2f, %.2f, %.2f, %.2f\n", grade1, grade2, grade3, grade4);
    printf("Average: %.2f\n", average);

    return 0;
}
