#include <stdio.h>
/*
Brenda Njire
CT101/G/26465/25
Computer science
Kirinyaga university
While loop
*/

int main() {
    float balance = 1000.0; // initial balance
    float withdrawal;

    printf("Welcome to the ATM!\n");
    printf("Your current balance is: KES %.2f\n", balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawal);

        if (withdrawal > balance) {
            printf("Insufficient funds! Your balance is: KES %.2f\n", balance);
        } else {
            balance -= withdrawal;
            printf("Withdrawal successful. Your new balance is: KES %.2f\n", balance);
        }
    }

    if (balance <= 0) {
        printf("Your account balance is zero or negative. Transaction terminated.\n");
    }

    printf("Thank you for using the ATM!\n");
    return 0;
}