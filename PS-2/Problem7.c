#include<stdio.h>


void main(){
    int n;
    int x;
    int result = 0;
    int product = 1;


    printf("Enter the Value of X: ");
    scanf("%d", &x);

    printf("Enter the Value of N: ");
    scanf("%d", &n);



    if(n<0 || x<0){
        printf("Invalid Input");
        return;
    }

    for(int i = 1; i<=n; i++){
        product = 1;
        for(int j = 1; j<=i; j++){
            product = product*x;
        }
        result = result + product;
    }
    printf("Result : %d", result);
}
