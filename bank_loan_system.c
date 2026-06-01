// bank loan system
// s-salary a-age c-credit score e- existing loan
#include<stdio.h>
int main(){
    int s, c, a, e;
    scanf("%d %d %d %d", &s, &c, &a, &e);
    if(e==0){
        if(a>21 && a<60){
            if(c>=700){
                if(s>=30000){
                    printf("loan aproved");
                }
                else{
                    printf("your income should low");
                }
            }
            else{
                printf("your credit score is insufficient");
            }
        }
        else{
            printf("your age is not eligible for loan");
        }
    }
    else{
        printf("loan rejected");
    }
    return 0;
}