#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int number, guess;
    srand(time(0));
    number = rand() % 10 + 1;
    printf("Guess a number (1-10): ");
    scanf("%d", &guess);
    if(guess == number)
        printf("You guessed it right!\n");
    else
        printf("Oops! The number was %d\n", number);
    return 0;
}