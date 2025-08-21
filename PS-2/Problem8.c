#include<stdio.h>


void main(){
    int n;
    float magic;


    printf("Enter the Number: ");
    scanf("%d", &n);

    magic = (n*(n*n + 1))/2;

    printf("Magic of %d is %.2f", n,magic);

}
