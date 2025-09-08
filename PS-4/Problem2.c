#include<stdio.h>
#define m 4
#define n 5



void main(){
    int arr[m][n] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};

    int col = 0;


    printf("To-Fro Method:\n");
    for(int i=0; i<m; i++){
        if(i%2 == 0){
            for(col = 0 ;col < n; col++){
                printf("%d ", arr[i][col]);
            }
        }else{
            for(col = n-1; col>=0; col--){
                printf("%d ", arr[i][col]);
            }
        }
    }

    printf("\nDiagonal Method:\n");
    for (int col = 0; col < n; col++) {
        int i = 0, j = col;
        while (i < m && j >= 0) {
            printf("%d ", arr[i][j]);
            i++; j--;
        }
    }

    for (int row = 1; row < m; row++) {
        int i = row, j = n - 1;
        while (i < m && j >= 0) {
            printf("%d ", arr[i][j]);
            i++; j--;
        }
    }

    printf("\nSpiral Method:\n");

     int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {

        for (int j = left; j <= right; j++)
            printf("%d ", arr[top][j]);
        top++;


        for (int i = top; i <= bottom; i++)
            printf("%d ", arr[i][right]);
        right--;

        if (top <= bottom) {

            for (int j = right; j >= left; j--)
                printf("%d ", arr[bottom][j]);
            bottom--;
        }

        if (left <= right) {

            for (int i = bottom; i >= top; i--)
                printf("%d ", arr[i][left]);
            left++;
        }
    }



}
