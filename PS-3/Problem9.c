#include <stdio.h>


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



void merge(int arr[], int low, int mid, int high) {
    int n = high - low + 1;
    int temp[n];
    int left = low;
    int right = mid + 1;
    int i = 0;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp[i] = arr[left];
            left++;
        } else {
            temp[i] = arr[right];
            right++;
        }
        i++;
    }

    while (left <= mid) {
        temp[i] = arr[left];
        left++;
        i++;
    }

    while (right <= high) {
        temp[i] = arr[right];
        right++;
        i++;
    }

    for (int j = low; j <= high; j++) {
        arr[j] = temp[j - low];
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low == high) return;

    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
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


    mergeSort(arr, 0, n - 1);

    printf("\nSorted Array: ");
    printArray(arr, n);

    return 0;
}
