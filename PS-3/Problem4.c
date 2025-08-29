#include<stdio.h>



void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        if(i == 0){
            printf("[");
        }
        if(i == n-1)
            printf("%d]", arr[i]);
        else
            printf("%d, ", arr[i]);
    }
}

void main(){
    int n;
    printf("Enter the Number of Elements (N): ");
    scanf("%d", &n);
    int arr[n];


    for(int i=0; i<n; i++){
        printf("Element %d:", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Entered Values: ");
    printArray(arr, n);

    int negative = 0,positive = 0,even = 0,odd = 0;

    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            negative++;
        }else{
            positive++;
        }

        if(arr[i]%2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    printf("\nNumber of Positive Numbers: %d\nNumber of Negative Numbers: %d\nNumber of Even Numbers: %d\nNumber of Odd Numbers: %d", positive,negative,even,odd);
}
