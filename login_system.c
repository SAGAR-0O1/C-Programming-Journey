#include<stdio.h>

int main()
{
    int cui = 101, cp = 1234;
    int ui, p;

    for(int i = 1; i <= 5; i++)
    {
        printf("Enter username: ");
        scanf("%d", &ui);
        printf("\nenter password\n");
        scanf("%d", &p);

        if(p == cp && cui==ui){
            printf("login succesfully");
            return 0;
        }
        else
        {
            printf("incorrect username or password\n");

            if(i < 5)
            {
                printf("Remaining Attempts = %d\n", 5 - i);
            }
        }
    }

    printf("Account Blocked\n");

    return 0;
}