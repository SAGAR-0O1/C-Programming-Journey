#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int cn, n, a = 0;

    // Initialize random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    cn = rand() % 100 + 1;

    printf("===== Number Guessing Game =====\n");
    printf("Guess the number between 1 and 100.\n");

    while (1)
    {
        printf("\nEnter your guess: ");
        scanf("%d", &n);

        a++;

        if (n < 1 || n > 100)
        {
            printf("Please enter a number between 1 and 100.\n");
        }
        else if (n > cn)
        {
            printf("Too High!\n");
        }
        else if (n < cn)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("\nCongratulations! You guessed the correct number.\n");
            printf("Total Attempts = %d\n", a);
            break;
        }
    }

    return 0;
}
