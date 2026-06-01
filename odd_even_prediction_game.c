#include<stdio.h>

int main(){
    int m, n, p, c, win=0, loss=0;
    int C;

    while(1){
        printf("enter 1 for play\n");
        printf("enter 2 for exit\n");
        printf("enter your choice: ");
        scanf("%d", &c);

        if(c==1){
            printf("\nenter 3 for select odd\n");
            printf("enter 4 for select even\n");
            printf("enter the number what do you play: ");
            scanf("%d", &C);

            printf("\nenter number 1: ");
            scanf("%d",&m);

            printf("\nEnter number 2: ");
            scanf("%d", &n);

            p = m + n;

            if(C==3){
                if(p%2!=0){
                    win++;
                    printf("\nyou won the prize\n");
                }
                else{
                    loss++;
                    printf("\nyou loss\n");
                }
            }
            else if(C==4){
                if(p%2==0){
                    win++;
                    printf("\nyou won the prize\n");
                }
                else{
                    loss++;
                    printf("\nyou loss\n");
                }
            }
            else{
                printf("invalid selection\n");
            }
        }
        else if(c==2){
            printf("Exit\n");
            break;
        }
        else{
            printf("invalid choice\n");
            break;
        }
    }

    printf("you win %d times\n", win);
    printf("you loss %d times\n", loss);

    return 0;
}