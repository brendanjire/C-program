//3D array
#include <stdio.h>
/*
Brenda njire
CT101/G/26465/25
Computer science
Kirinyaga university
3D array for multiple 
*/

//declare and initialize
int main() {
    int chain[3][5][10];
    int totalOccupied = 0;
    int branch, floor, room;

    

    // Assign random occupancy to each room
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // 0 or 1
                totalOccupied = totalOccupied + chain[branch][floor][room];
            }
        }
    }

    // Display occupancy of each room
    for (branch = 0; branch < 3; branch++) {
        printf("Branch %d:\n", branch + 1);
        for (floor = 0; floor < 5; floor++) {
            printf("  Floor %d: ", floor + 1);
            for (room = 0; room < 10; room++) {
                printf("%d ", chain[branch][floor][room]);
            }
            printf("\n");
       }     
 }   

    // Display totanumber of of occupied rooms
    printf("\nTotal occupied rooms: %d\n", totalOccupied);

    return 0;
}