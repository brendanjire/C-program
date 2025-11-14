#include <stdio.h>
/*
Brenda njire
CT101/G/26465/25
Computer science
Data purchase
*/
int main() {
    int choice;

    // Display the data purchase menu
    printf("\nSelect data bundle:");
    printf("\n100MB @ 50 KES");
    printf("\n500MB @ 200 KES");
    printf("\n1GB @ 350 KES");
    printf("\n2GB @ 600 KES");

    // prompt user to enter choice(1-4)
    printf("Enter your choice (1-4):choice\n ");
    scanf("%d", &choice);

    // Use switch statement to display selected bundle and cost
    switch (choice) {
        case 1:
            printf("You selected 100MB: Cost =  KES\n");
            break;
        case 2:
            printf("You selected 500MB: Cost = 200 KES\n");
            break;
        case 3:
            printf("You selected 1GB: Cost = 350 KES\n");
            break;
        case 4:
            printf("You selected 2GB: Cost = 600 KES\n");
            break;
        default:
            printf("\nInvalid choice");
            break;
  }  

    return 0;
}