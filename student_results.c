#include <stdio.h>
#include <string.h>
/*
Brenda njire
CT101/G/26465/25
Computer science
Kirinyaga university
*/

#define MAX_NAME_LENGTH 50
#define MAX_REGNO_LENGTH 20

// Define a structure to hold student information
typedef struct {
    char name[MAX_NAME_LENGTH];
    char regno[MAX_REGNO_LENGTH];
    float marks;
} Student;

int main() {
    FILE *file;
    Student student;

    // Open the binary file in read mode
    file = fopen("results.dat", "rb");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Student Records:\n");
    printf("-----------------\n");

    // Read student records from the binary file
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        // Display the name and marks of each student
        printf("Name: %s\n", student.name);
        printf("Registration Number: %s\n", student.regno);
        printf("Marks: %.2f\n", student.marks);
        printf("-----------------\n");
    }

    // Close the file
    fclose(file);

    return 0;
}