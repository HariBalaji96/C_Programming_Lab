#include<stdio.h>
#include<Math.h>

void main(){

    int t;
    int solution;

    printf("Enter the Value of T: ");
    scanf("%d", &t);
    if(t > 0 && t<=2){
        solution = 20;
        printf("%d", solution);
    }else if(t>13 && t<=16 || t>30){
        solution = 4*(t+2);
        printf("%d", solution);
    }else{
        solution = 4*((t*t) + 2*t);
        printf("%d", solution);
    }
}
