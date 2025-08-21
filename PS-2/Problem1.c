#include<stdio.h>


void multipleFinder(int first, int last){
    if(first > last){
        if(first%last == 0){
            printf("\n\n%d is a multiple of %d", first, last);
            return;
        }
    }else{
        if(last%first == 0){
            printf("\n\n%d is a multiple of %d", last, first);
            return;
        }
    }
    printf("\n\nBoth are not a multiples of each other");

}



void main(){
    int number;
    int lastdigit;
    int firstdigit;

    printf("Enter the Number: ");
    scanf("%d", &number);

    if(number < 10){
        printf("Invalid Input");
        return;
    }

    int original = number;
    while(original>0){
        if(number == original)
            lastdigit = original%10;
        original = original/10;
        if(original > 0)
            firstdigit = original%10;
    }

    printf("\nFirst Digit: %d Last Digit: %d"  , firstdigit,lastdigit);
    multipleFinder(firstdigit, lastdigit);

}
