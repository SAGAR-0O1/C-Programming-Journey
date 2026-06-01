#include <stdio.h>

int main()
{
    int pin, correctPin = 1234;
    int balance = 5000;
    int withdraw;
    int attempt = 1;

    while (attempt <= 3)
    {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin)
        {
            printf("Enter withdraw amount: ");
            scanf("%d", &withdraw);

            if (withdraw <= balance)
            {
                balance = balance - withdraw;

                printf("Transaction Successful\n");
                printf("Remaining Balance = %d\n", balance);
            }
            else
            {
                printf("Insufficient Balance\n");
            }

            break;
        }
        else
        {
            printf("Wrong PIN\n");

            if (attempt < 3)
            {
                printf("Remaining Attempts = %d\n", 3 - attempt);
            }
        }

        attempt++;
    }

    if (attempt > 3)
    {
        printf("Account Blocked\n");
    }

    return 0;
}