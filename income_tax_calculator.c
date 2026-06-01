#include<stdio.h>
int main(){
    // Annual salary is an
    int an;
    scanf("%d", &an);
    if(an>=0 && an<=300000){
        printf("your tax amount is %f", an*0/100.0);
        printf("your remaining salary is %f", an-(an*0/100.0));
    }
    else if(an>300000 && an<=700000){
        printf("your tax amount is %f", an*5/100.0);
        printf("your remaining salary is %f", an-(an*5/100.0));
    }
    else if(an>700000 && an<=1000000){
        printf("your tax amount is %f", an*20/100.0);
        printf("your remaining salary is %f", an-(an*20/100.0));
    }
    else if(an>1000000){
        printf("your tax amount is %f", an*30/100.0);
        printf("your remaining salary is %f", an-(an*30/100.0));
    }
    else{
        printf("you give invailed format amount");
    }
    return 0;
}