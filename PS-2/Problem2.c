#include <stdio.h>


void main(){
    double x;
    double y;
    double r = 5.0;
    printf("Enter the Value of X: ");
    scanf("%lf" , &x);
    printf("Enter the Value of Y: ");
    scanf("%lf" , &y);

    double distance = x*x + y*y;
    if(distance < r*r){
        printf("The Point is Present Inside the Circle");
    }else if(distance == r*r){
        printf("The Point is Present on the circle");
    }else{
        printf("The Point is Present outside the circle");
    }
}
