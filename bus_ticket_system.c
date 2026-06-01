#include<stdio.h>

int main()
{
    int age, gender;
    int fare = 500;
    int finalfare;

    while(1)
    {
        printf("\n===== BUS TICKET SYSTEM =====\n");

        printf("Enter Age: ");
        scanf("%d", &age);

        printf("Enter Gender ");
        printf("\n1. Male");
        printf("\n2. Female\n");
        scanf("%d", &gender);

        finalfare = fare;

        // Child
        if(age < 5)
        {
            finalfare = 0;
        }

        // Senior citizen
        else if(age > 60)
        {
            finalfare = fare - (fare * 50 / 100);
        }

        // Female discount
        else if(gender == 2)
        {
            finalfare = fare - (fare * 30 / 100);
        }

        printf("Final Ticket Fare = %d\n", finalfare);

        int choice;

        printf("\n1. Next Passenger");
        printf("\n2. Exit\n");

        scanf("%d", &choice);

        if(choice == 2)
        {
            break;
        }
    }

    return 0;
}