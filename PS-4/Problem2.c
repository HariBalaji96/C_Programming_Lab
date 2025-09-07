#include<stdio.h>
#define m 4
#define n 5



void main(){
    int arr[m][n] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};

    int row = 0;
    int col = 0;


    printf("\nTo-Fro Method:\n");
    while(row < m){
        if(row%2 == 0){
            while(col < n){
                printf("%d ", arr[row][col]);
                col++;
            }
            col--;
        }else{
            while(col >= 0){
                printf("%d ", arr[row][col]);
                col--;
            }
            col++;
        }
        row++;

    }
}
