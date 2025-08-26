# Interesting Problems From Problem Sheets

### 1.Consider an array of numbers from 1 to N . In this array, one of the numbers gets duplicated
and one is missing. Write a C program to find out the duplicated number. Condition: Using
only one loop and without any extra memory

```
#include<stdio.h>



void main(){
    int arr[10] = {1,2, 5, 3, 4, 10, 7, 6, 8 ,8};
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
```
#### Notes:
- If the array is sorted we can easily find the duplicate and missing number using two pointer technique (Fast and Slow Pointer)
- If the array is unsorted we have to find using this following technique
  - Sum of Natural Number `(Ex_Sum) = n(n+1)/2`
  - Sum of Square of Natural Number `(Ex_Sq_Sum) = (n(n+1)(2n+1))/6`
  - Then Find the sum of the elements in sum `Sum` and sum of the square of elements `Sq_Sum`.
  - Find Difference between those sum `diff = Ex_Sum - Sum` and `Sq_Diff = Ex_Sq_Sum - Sq_Sum`.
  - Then SumDM = `Sq_Diff/diff`
  - missing = `(diff+SumDM)/2`
  - duplicate = `missing - diff`

