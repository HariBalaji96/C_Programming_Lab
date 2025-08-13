#include<stdio.h>
#include<Math.h>

void main(){

    int a,b,c;
    int root1, root2;

    printf("Enter the Co-Efficient of X^2: ");
    scanf("%d", &a);
    printf("Enter the Co-Efficient of X: ");
    scanf("%d", &b);
    printf("Enter the Constant: ");
    scanf("%d", &c);
    int validator = (b*b)- 4*a*c;
    if(validator < 0){
        printf("Roots are imaginary!");
    }else{
        root1 = (-1*b + sqrt(validator))/2*a;
        root2 = (-1*b - sqrt(validator))/2*a;
        printf("Roots are %d and %d", root1, root2);
    }

}
