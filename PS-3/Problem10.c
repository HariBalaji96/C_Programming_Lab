#include <stdio.h>

void printArray(int arr[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) printf(", ");
    }
    printf("]");
}

int containsDuplicateWithinK(int arr[], int n, int k) {
    int found = 0;
    int hash[n];
    for(int a=0; a<n; a++){
        hash[a] = 0;
    }
    for (int i = 0; i < n; i++) {
        if(hash[i] == 1) continue;
        int end = i + k < n ? i + k : n - 1;
        for (int j = i + 1; j <= end; j++) {
            if (arr[i] == arr[j]) {
                printf("%d is a duplicate within distance %d\n", arr[i], k);
                found = 1;
                hash[j] = 1;
            }
        }
    }
    return found;
}

void main() {
    int n;
    printf("Enter the Number of Elements (N): ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Entered Values: ");
    printArray(arr, n);
    printf("\n");

    int k;
    printf("Enter the Value of K (1 to %d): ", n-1);
    scanf("%d", &k);
    if (k < 1 || k >= n) {
        printf("Value of K is Invalid!!!\n");
        return 1;
    }

    if (!containsDuplicateWithinK(arr, n, k)) {
        printf("No duplicates found within the given range.\n");
    }

}
