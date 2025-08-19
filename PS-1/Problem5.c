#include <stdio.h>
#include <math.h>

void main() {
    int a, b;
    int max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);


    max = (a + b + abs(a - b)) / 2;

    printf("\nBiggest Number: %d", max);

}
