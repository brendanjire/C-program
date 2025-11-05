#include <stdio.h>
/*Brenda njire
ct101/g/26465/25
computer science
calculator electricity bill
*/
int calculate_electricity_bill(int units) {
    int bill_amount = 0;

    if (units <= 100) {
        bill_amount = units * 10;
    } else if (units <= 200) {
        bill_amount = 100 * 10 + (units - 100) * 15;
    } else {
        bill_amount = 100 * 10 + 100 * 15 + (units - 200) * 20;
    }

    return bill_amount;
}

int main() {
    int units = 250;
    int total_bill = calculate_electricity_bill(units);
    printf("Total bill for %d units is: %d\n", units, total_bill);
    return 0;
}