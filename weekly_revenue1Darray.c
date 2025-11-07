//1D array
#include<stdio.h>
/*
Brenda Njire
CT101/G/26465/25
Computer science
Kirinyaga University
1D array -weekly revenue tracker
*/

int main() {
//declare and initialize
    int revenue[7];
    float totalRevenue = 0;
    float averageRevenue;

    // for(start;stop;step)
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for the day %d: ", i + 1);
        scanf("%d", &revenue[i]);
        totalRevenue += revenue[i];
    }

    // Calculate average  revenue for the week
    averageRevenue = totalRevenue / 7;

    // Display the results
    printf("Total Weekly Revenue: %.2f\n", totalRevenue);
    printf("Average Daily Revenue: %.2f\n", averageRevenue);

    return 0;
}
    