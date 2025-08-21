#include<stdio.h>


void main(){
    int n1,n2,d1,d2;
    int num;
    int den;

    printf("Enter the Numerator: ");
    scanf("%d", &num);

    printf("Enter the Denomenator: ");
    scanf("%d", &den);

    n1 = num%10;
    n2 = num/10;
    d1 = den%10;
    d2 = den/10;


    if(n1 == d1 && d2 != 0){
        if(n2/d2 == num/den)
            printf("Result of Sleepy Technique: %d/%d", n2,d2);
        else{
            printf("No Answer for this case.");
        }
    }else if(n2 == d2 && d1 != 0){
        if(n1/d1 == num/den)
            printf("Result of Sleepy Technique: %d/%d", n1,d1);
        else{
            printf("No Answer for this case.");
        }
    }else if(n1 == d2 && d1 != 0){
        if(n2/d1 == num/den)
            printf("Result of Sleepy Technique: %d/%d", n2,d1);
        else{
            printf("No Answer for this case.");
        }
    }else if(n2 == d1 && d2 != 0){
        if(n1/d2 == num/den)
            printf("Result of Sleepy Technique: %d/%d", n1,d2);
        else{
            printf("No Answer for this case.");
        }
    }else{
        printf("No Answer for this case");
    }

}
