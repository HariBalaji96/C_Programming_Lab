#include <stdio.h>

void reverse(int a[], int l, int r){
    while(l < r){
        int t = a[l];
        a[l] = a[r];
        a[r] = t;
        l++;
        r--;
    }
}

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

int main(){
    int n;
    printf("Enter the Number of Elements (N): ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter K (left rotate by K): ");
    scanf("%d", &k);

    if(n == 0) return 0;
    k = ((k % n) + n) % n;


    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
    reverse(arr, 0, n-1);

    printf("Rotated Array: ");
    printArray(arr, n);
    return 0;
}
