#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Brenda njire
CT101/G/26465/25
Kirinyaga university
Computer science
*/
int main() {
    int secretNumber, guess;
    int attempts = 0;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 20
    secretNumber = rand() % 20 + 1;

    do {
        printf("Guess a number between 1 and 20: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        }
    } while (guess != secretNumber);

    printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
    return 0;
}