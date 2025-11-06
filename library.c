#include <stdio.h>
#include <string.h>
/*
Brenda njire
CT101/G/26465/25
Computer science
Kirinyaga university
File
*/

int main() {
    FILE *file;
    char title[100];

    // Open the file in append mode
    file = fopen("borrowed_books.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = 0; // Remove the newline character

    // Write the title to the file
    fprintf(file, "%s\n", title);

    // Close the file
    fclose(file);

    printf("Book title successfully stored!\n");
    return 0;
}