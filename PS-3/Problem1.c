#include<stdio.h>
#include<limits.h>

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

    int first = INT_MIN;
    int second = INT_MIN;

    for(int j=0; j<n; j++){
        if(arr[j] > first){
            second = first;
            first = arr[j];
        }else if(arr[j] > second && arr[j] < first){
            second = arr[j];
        }
    }
    printf("Entered Value: ");
    printArray(arr, n);

    if (second == INT_MIN) {
        printf("\nNo second largest element exists.\n");
    } else {
        printf("\nThe Second Largest Number: %d\n", second);
    }
}

