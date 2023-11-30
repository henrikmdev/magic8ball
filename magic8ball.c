#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int result = 1;
    printf("Welcome to the Random Dice Roll Simulator!\n");

    // Seed the random number generator
    srand(time(0));

    // Roll a six-sided die
    result = rand() % 6 + 1;

    printf("You rolled a: %d\n", result);

    return 0;
}