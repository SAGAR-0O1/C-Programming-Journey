#include<stdio.h>

int main()
{
    int cn = 50;
    int n, a = 0;

    while(1)
    {
        printf("Enter number: ");
        scanf("%d", &n);

        a++;

        if(n > cn)
        {
            printf("Too High\n");
        }
        else if(n < cn)
        {
            printf("Too Low\n");
        }
        else
        {
            printf("Correct Number\n");
            printf("Total Attempts = %d\n", a);
            break;
        }
    }

    return 0;
}