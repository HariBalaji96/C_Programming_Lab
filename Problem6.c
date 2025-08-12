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

    for(int i=1; i<=5; i++){
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

}

