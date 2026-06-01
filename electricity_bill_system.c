#include<stdio.h>
int main(){
    while(1){
        int u;
        printf("UNIT COSUMED: ");
        scanf("%d", &u);
        if(u>0 && u<=100){
            printf("\nyour bill is %d\n", 5*u);
        }
        else if(u>100 && u<=300){
            printf("your bill is %d\n", 7*u);
        }
        else{
            printf("your bill is %d\n", 10*u);
        }
    }
    return 0;
}