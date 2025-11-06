#include <stdio.h>
/*
Brenda njire
CT101/G/26465/25
Kirinyaga university
Computer science
Do while loop
*/
int main() {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Incorrect password. Try again!\n");
        }
    } while (password != 1234);

    printf("Access Granted\n");
    return 0;
}