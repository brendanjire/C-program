#include <stdio.h>
/*
Brenda njire
kirinyaga university
ct101/g/26465/25
computer science
function to calculate fare
*/
// Function to calculate fare
int calculateFare(float distance) {
    // Fare rate is KSh. 50 per kilometer
    float fareRate = 50.0;
    // Calculate total fare
    float totalFare = distance * fareRate;
    // Return total fare as an integer 
    return (int)totalFare;
}

int main() {
    float distance = 10.0; // Distance in kilometers
    int fare = calculateFare(distance);
    printf("The total fare for %.2f km is: %d\n", distance, fare);
    return 0;
}