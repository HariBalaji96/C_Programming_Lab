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

    int front = 0;
    int end = n-1;
    while(front < end){
        int temp = arr[front];
        arr[front] = arr[end];
        arr[end] = temp;
        front++;
        end--;
    }
    printf("\nReversed Array: ");
    printArray(arr, n);
}
