#include<stdio.h>
#include<Math.h>

void main(){
    int n = 5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }


    printf("\n");

    for(int i=1; i<=n; i++){
        for(int a=1; a<=n-i; a++){
            printf(" ");
        }

        for(int j=1; j<=2*i - 1; j++){
            printf("*");
        }

        for(int a=1; a<=n-i; a++){
            printf(" ");
        }
        printf("\n");
    }

    for(int i=1; i<=2*n - 1; i++){
        int spaces = n-i;
        int stars = 2*i - 1;
        if(i > n){
            stars = 2*n - (2*(i-n)) - 1;
            spaces = i - n;
        }

        for(int a=1; a<=spaces; a++){
            printf(" ");
        }

        for(int j=1; j<=stars; j++){
            printf("*");
        }

        for(int a=1; a<=spaces; a++){
            printf(" ");
        }
        printf("\n");
    }


    for(int i=0; i<=2*n+1; i++){
        int spaces = 2*i;
        int stars = n-i+1;
        if(i > n){
            stars = i-n;
            spaces = 2*n - 2*(i-n - 1);
        }
        for(int a=1; a<=spaces; a++){
            printf(" ");
        }
        for(int b=1; b<=stars; b++){
            printf("*");
        }
        printf("\n");
    }



}

