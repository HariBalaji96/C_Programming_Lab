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
    printf("\nEnter the Value of (K): ");
    scanf("%d", &k);

    int freq = n/k;
    int count;
    int visited[n];
    for(int i=0; i<n; i++){
        visited[i] = 0;
    }

    for(int i=0; i<n; i++){
        count = 1;
        if(visited[i] == 1)
            continue;
        for(int j=i+1; j<n; j++){
            if(arr[j] == arr[i]){
                count++;
                visited[j] = 1;
            }

        }
        if(count > freq){
            printf("\n%d is occurred more than n/k times", arr[i]);
        }
    }


}
