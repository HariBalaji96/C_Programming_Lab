#include<stdio.h>


void main(){
    int y = 1;
    float i;
    float x;
    while(y <= 6){
        x = 5.5;
        while(x<=12.5){
            printf("\nY: %d", y);
            printf("\tX: %.2f", x);
            i = 2 + (y + 0.5*x);
            printf("\tI: %.2f", i);
            x = x + 0.5;
        }
        y++;
    }


}
