#include<stdio.h>


void main(){
    int first;
    int last;
    int middle;
    int number;

    printf("Enter the Number: ");
    scanf("%d", &number);

    if(number < 99 || number > 999){
        printf("Invalid Input");
        return;
    }
    int temp = number;
    int iteration = 1;
    while(temp > 0){
        if(iteration == 1)
            last = temp%10;
        else if(iteration == 2)
            middle = temp%10;
        else
            first = temp%10;
        iteration++;
        temp = temp/10;
    }

    printf("First : %d Middle : %d Last: %d", first, middle, last);
    if(first + last == middle)
        printf("\nThe Sum of First and Last is equal to Middle Digit");
    else
        printf("\nThe Sum of First and Last is not equal to Middle Digit");

}
