//decision making 
#include <stdio.h>
//declare and initialize
int main() {
    int units;
    float bill;

    // Prompt user to enter the number of water units consumed
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Calculating total water bill
    if (units <= 30) {
        bill = units * 30.0;
    } else if (units <= 60) {
        bill = (30 * 30) + (units - 30) * 25;
    } else {
        bill = (30 * 30) + (30 * 25) + (units - 60) * 30;
    }

    // Display the total bill
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}