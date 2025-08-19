#include <stdio.h>
#include <Math.h>

void main() {
    int number = 21;
    int sum = 1;

    printf("Enter the Number: ");
    scanf("%d", &number);

    for(int i=2; i<= sqrt(number); i++){
        if(number%i == 0){
            sum = sum + i;
            sum = sum + number/i;
        }
    }
    if(number == sum){
        printf("%d is Perfect Number", number);
    }else{
        printf("%d is not a Perfect Number", number);
    }
}
