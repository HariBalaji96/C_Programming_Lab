#include <stdio.h>

void findMaxAverageSubarray(int arr[], int n, int k) {
    if (k > n) {
        printf("Subarray of length %d is not possible\n", k);
        return;
    }

    int curr_sum = 0;
    for (int i = 0; i < k; i++) {
        curr_sum += arr[i];
    }

    int max_sum = curr_sum;
    int start_index = 0;

    for (int i = k; i < n; i++) {
        curr_sum += arr[i] - arr[i - k];
        if (curr_sum > max_sum) {
            max_sum = curr_sum;
            start_index = i - k + 1;
        }
    }

    double max_avg = (double)max_sum / k;
    printf("Maximum average subarray of length %d begins at index %d\n", k, start_index);
    printf("Maximum average is %.2f\n", max_avg);
}

int main() {
    int arr[] = {1, 12, -5, -6, 50, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    findMaxAverageSubarray(arr, n, k);

    return 0;
}
