#include<stdio.h>
int main(){
    int a, b, choise;
    scanf("%d %d %d", &a, &b, &choise);
    if(choise==1){
        printf("%d", a+b);
    }
    else if(choise==2){
        printf("%d",  a-b);
    }
    else if(choise==3){
        printf("%d", a*b);
    }
    else if(choise==4){
        printf("%d", a/b);
    }
    else{
        printf("invailed choice");
    }
    return 0;
}