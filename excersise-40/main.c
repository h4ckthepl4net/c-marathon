
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int MAX = 100;

int main() {
    srand(time(NULL));
    int randomNum = rand() % MAX + 1;
    int guess;
    int count = 0;
    printf("Guess a number between 1 and %d: ", MAX);
    while (guess != randomNum) {
        scanf("%d", &guess);
        if (guess > randomNum) {
            printf("Too high, try again: ");
        } else if (guess < randomNum) {
            printf("Too low, try again: ");
        }
        count++;
    }
    printf("You guessed it in %d tries!\n", count);
    return 0;
}
    