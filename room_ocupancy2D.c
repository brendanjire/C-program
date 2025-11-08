//2D array
#include <stdio.h>
/*
Brenda Njire
CT101/G/26465/25
Computer science
Kirinyaga University
2D array-Room occupancy in a hotel
*/

#define floors 5
#define rooms 10
//declare and initialize
int main() {
    int occupancy[floors][rooms];
    int occupiedPerFloor[floors] = {0};
    int vacantPerFloor[floors];

    // Input data for room occupancy
    for (int floor = 0; floor < floors; floor++) {
        for (int room = 0; room < rooms; room++) {
            if (occupancy[floor][room] == 1) {
                occupiedPerFloor[floor]++;
            }
        }
        vacantPerFloor[floor] = rooms - occupiedPerFloor[floor];
    }

    // Display occupancy of rooms per floor
    for (int floor = 0; floor < floors; floor++) {
        printf("Floor %d:\n", floor + 1);
        printf("  Occupied rooms: %d\n", occupiedPerFloor[floor]);
        printf("  Vacant rooms: %d\n", vacantPerFloor[floor]);
    }

    return 0;
}