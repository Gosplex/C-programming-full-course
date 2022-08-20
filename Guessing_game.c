#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNum = 5;
    int guessNum;
    int guessLimit = 3;
    int guessCount = 0;
    int outOfGuesses = 0;

    while (guessNum != secretNum && outOfGuesses == 0)
    {
        if (guessCount < guessLimit)
        {
            printf("Take a guess: ");
            scanf("%d", &guessNum);
            guessCount++;
        }
        else
        {
            outOfGuesses = 1;
        }

        if (outOfGuesses == 1)
        {
            printf("You are out of guesses!");
        }
        else
        {
            printf("You win!");
        }
    }

    return 0;
}