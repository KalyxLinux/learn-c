#include <stdio.h>

void guessNumber(int guess)
{
    int secretNumber = 555;

    if (guess < secretNumber)
    {
        printf("TOO LOW! guess again. \n");
    }
    else if (guess > secretNumber)
    {
        printf("TOO HIGH! guess again. \n");
    }
    else
    {
        printf("CONGRATULATIONS! You guessed the number correctly. \n");
    }
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}