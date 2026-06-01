#include<stdio.h>

int main()
{
    int cb = 10000;   // current balance
    int cp = 1234;    // correct pin
    int wl = 5000;    // withdraw limit

    int a, p, c;
    int da, wa;
    int newpin;

    while(1)
    {
        printf("\n===== MINI BANKING SYSTEM =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Change PIN\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &c);

        // Deposit
        if(c == 1)
        {
            for(a = 1; a <= 3; a++)
            {
                printf("Enter PIN: ");
                scanf("%d", &p);

                if(p == cp)
                {
                    printf("Enter deposit amount: ");
                    scanf("%d", &da);

                    if(da > 0)
                    {
                        cb = cb + da;
                        printf("Deposit Successful\n");
                        printf("Current Balance = %d\n", cb);
                    }
                    else
                    {
                        printf("Invalid Amount\n");
                    }

                    break;
                }
                else
                {
                    printf("Wrong PIN\n");
                    printf("Remaining Attempts = %d\n", 3-a);
                }
            }

            if(a > 3)
            {
                printf("Account Blocked\n");
                break;
            }
        }

        // Withdraw
        else if(c == 2)
        {
            for(a = 1; a <= 3; a++)
            {
                printf("Enter PIN: ");
                scanf("%d", &p);

                if(p == cp)
                {
                    printf("Enter withdraw amount: ");
                    scanf("%d", &wa);

                    if(wa > wl)
                    {
                        printf("Withdraw limit exceeded\n");
                    }
                    else if(wa > cb)
                    {
                        printf("Insufficient Balance\n");
                    }
                    else if(wa > 0)
                    {
                        cb = cb - wa;

                        printf("Withdrawal Successful\n");
                        printf("Current Balance = %d\n", cb);
                    }
                    else
                    {
                        printf("Invalid Amount\n");
                    }

                    break;
                }
                else
                {
                    printf("Wrong PIN\n");
                    printf("Remaining Attempts = %d\n", 3-a);
                }
            }

            if(a > 3)
            {
                printf("Account Blocked\n");
                break;
            }
        }

        // Check Balance
        else if(c == 3)
        {
            printf("Current Balance = %d\n", cb);
        }

        // Change PIN
        else if(c == 4)
        {
            printf("Enter current PIN: ");
            scanf("%d", &p);

            if(p == cp)
            {
                printf("Enter new 4-digit PIN: ");
                scanf("%d", &newpin);

                if(newpin >= 1000 && newpin <= 9999)
                {
                    cp = newpin;
                    printf("PIN Changed Successfully\n");
                }
                else
                {
                    printf("PIN must be 4 digits\n");
                }
            }
            else
            {
                printf("Wrong PIN\n");
            }
        }

        // Exit
        else if(c == 5)
        {
            printf("Thank You\n");
            break;
        }

        // Invalid choice
        else
        {
            printf("Invalid Choice\n");
        }
    }

    return 0;
}