#include<stdio.h>
#include <math.h>


void main(){
    int x;
    float solution;
    printf("Enter the value of X: ");
    scanf("%d", &x);
    solution = (x*x*x - 2*(x*x) + x - 6.3) / ((x*x) + 0.05*x + 3.14);
    printf("\nSolution: %.2f" , solution);


}

