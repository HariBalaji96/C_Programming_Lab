#include<stdio.h>


void main(){
    int sum = 0;
    int product = 1;
    int number;

    printf("Enter the Number: ");
    scanf("%d", &number);

    if(number < 99 || number > 999){
        printf("Invalid Input");
        return;
    }
    int temp = number;
    while(temp > 0){
        sum = sum + (temp%10);
        product = product * (temp%10);
        temp = temp/10;
    }

    printf("Product of digits : %d  Sum of Digits: %d", product,sum);
    if(product == sum)
        printf("\nProduct and Sum are Equal");
    else
        printf("\nProduct and Sum are Not Equal");



}
