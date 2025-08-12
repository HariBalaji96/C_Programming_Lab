#include<stdio.h>
#include<Math.h>

void main(){

    int a,b,c;
    int root1, root2, root3, root4;

    printf("Enter the Co-Efficient of X^2: ");
    scanf("%d", &a);
    printf("Enter the Co-Efficient of X: ");
    scanf("%d", &b);
    printf("Enter the Constant: ");
    scanf("%d", &c);

    root1 = (-1*b + sqrt((b*b)- 4*a*c))/2*a;
    root2 = (-1*b + sqrt((b*b)- 4*a*c))/2*a;
    root3 = (-1*b - sqrt((b*b)- 4*a*c))/2*a;
    root4 = (-1*b - sqrt((b*b)- 4*a*c))/2*a;

    printf("Roots are %d,%d,%d,%d",root1,root2,root3,root4);


}
