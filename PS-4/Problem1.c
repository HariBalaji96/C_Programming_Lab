#include<stdio.h>



void main(){
    unsigned int arr[10] = {1,2, 5, 3, 4, 10, 7, 6, 8 ,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int expectedSum = n*(n+1)/2;
    int actualSum = 0;
    int expectedSumSq = n*(n+1)*(2*n + 1)/6;
    int actualSumSq = 0;
    for(int i=0; i<n; i++){
        actualSum = actualSum + arr[i];
        actualSumSq = actualSumSq + arr[i]*arr[i];
    }

    int diff = expectedSum - actualSum;
    int sq_diff = expectedSumSq - actualSumSq;
    int sum_DM = sq_diff/diff;
    int missing = (diff+sum_DM)/2;
    int duplicate = missing - diff;
    printf("Duplicate Number: %d", duplicate);
    printf("\nThe Missing Number: %d", missing);

}
