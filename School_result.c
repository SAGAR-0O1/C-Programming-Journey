#include<stdio.h>

int main()
{
    int s1, s2, s3, s4, s5;
    int n;
    int student = 0;

    while(1)
    {
        printf("enter choice ");
        scanf("%d", &n);

        if(n == 1)
        {
            while(1)
            {
                printf("enter marks s1 ");
                scanf("%d", &s1);

                printf("enter marks s2 ");
                scanf("%d", &s2);

                printf("enter marks s3 ");
                scanf("%d", &s3);

                printf("enter marks s4 ");
                scanf("%d", &s4);

                printf("enter marks s5 ");
                scanf("%d", &s5);

                if(s1 >= 0 && s2 >= 0 && s3 >= 0 && s4 >= 0 && s5 >= 0 &&
                   s1 <= 100 && s2 <= 100 && s3 <= 100 && s4 <= 100 && s5 <= 100)
                {
                    student++;

                    if(s1 >= 33 && s2 >= 33 && s3 >= 33 &&
                       s4 >= 33 && s5 >= 33)
                    {
                        float percentage =
                        ((s1 + s2 + s3 + s4 + s5) / 500.0) * 100;

                        printf("\nyou are passed and your percentage is %.2f\n", percentage);

                        if(percentage >= 90)
                        {
                            printf("your grade is A\n");
                        }
                        else if(percentage >= 75)
                        {
                            printf("your grade is B\n");
                        }
                        else if(percentage >= 60)
                        {
                            printf("your grade is C\n");
                        }
                        else if(percentage >= 40)
                        {
                            printf("your grade is D\n");
                        }
                        else
                        {
                            printf("your grade is E\n");
                        }

                        if(s1 > 80 && s2 > 80 && s3 > 80 &&
                           s4 > 80 && s5 > 80)
                        {
                            printf("you get scholarship\n");
                        }
                    }
                    else
                    {
                        printf("you are fail\n");
                    }

                    break;
                }
                else
                {
                    printf("invalid marks\n");
                }
            }
        }
        else if(n == 2)
        {
            printf("total students processed %d\n", student);
            printf("exit\n");
            break;
        }
        else
        {
            printf("invalid choice\n");
        }
    }

    return 0;
}