#include<stdio.h>
int main(){
    int cp=2026, p, a=1; // a is attemp and p is pin
    for(a=1; a<=4; a++){
        printf("enter pin: ");
        scanf("%d", &p);
        if(p==cp){
            printf("\nAccess Granted\n");
            break;
        }
        else{
            printf("wrong pin remaining attemp %d\n", 4-a);
            printf("try again\n");
        }
    }
    if(a>4 && p!=cp){
            printf("account blocked");
        }
    return 0;
}