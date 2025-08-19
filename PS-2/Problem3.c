#include<stdio.h>


void main(){
    int number;
    printf("Enter the Number: ");
    scanf("%d" , &number);
    if(number < 0){
        printf("Invalid Input");
        return;
    }

    int i = 1;
    int result = 0;
    while(number > 0){
        result = result + (number*i);
        number--;
        i++;
    }
    printf("Sum : %d", result);

}
