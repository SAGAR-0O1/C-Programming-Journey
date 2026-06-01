#include<stdio.h>
int main(){
    int age, sa; //sa is seat available
    char gender;
    scanf("%d %c %d", &age, &gender, &sa);
    if(sa==1){
        printf("seat is available\n");
        if(age>60){
            printf("you get senior citizen discount\n");
        }
        if(gender=='f'){
            printf("you get special discount");
        }
        else{
            printf("you have nothing discount");
        }
    }
    else if(sa==0){
        printf("seat are not availble Booking failed");
    }
    else{
        printf("invailed seat input");
    }
    return 0;
}