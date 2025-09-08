#include <stdio.h>
#include <stdlib.h>

int searchElement(int arr[], int n, int x) {
    int i = 0;
    while (i < n) {

        if (arr[i] == x)
            return i;
        int step = abs(arr[i] - x);
        i = i + step;
    }
    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Enter element to search: ");
    scanf("%d", &x);

    int index = searchElement(arr, n, x);
    if (index != -1)
        printf("Element %d found at position %d\n", x, index + 1);
    else
        printf("Element %d not found in the array\n", x);

    return 0;
}
