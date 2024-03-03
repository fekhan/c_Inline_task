#include <stdio.h>
#include <string.h>

// Structure to represent a student
struct Student {
    char name[50]; // Array to store student's name
    int id;
    int age;
};

int main() {
    struct Student student; // Create a structure variable

    // Get student information from the user
    printf("Enter student name: ");
    fgets(student.name, 50, stdin); 
    student.name[strcspn(student.name, "\n")] = '\0'; // Remove trailing newline, if any

    printf("Enter student ID: ");
    scanf("%d", &student.id);

    printf("Enter student age: ");
    scanf("%d", &student.age);

    // Print the stored student information
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("ID: %d\n", student.id);
    printf("Age: %d\n", student.age);

    return 0;
}

