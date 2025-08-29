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

    int isDuplicate = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                printf("\n%d is Duplicate", arr[i]);
                isDuplicate++;
            }
        }
    }

    if(isDuplicate == 0)
        printf("\nThere is no Duplicate in the Array");
}
