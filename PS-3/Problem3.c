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


    int k;
    printf("\nEnter the Value You have to Find: ");
    scanf("%d", &k);
    int find = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == k){
            printf("Index of %d : %d", k,i);
            find = 1;
            break;
        }
    }
    if(find == 0)
        printf("The Element is Not in the Array");
}
