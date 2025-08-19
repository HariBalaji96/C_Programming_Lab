#include <stdio.h>

void multipleFinder(int first, int last) {
    if (first == 0 || last == 0) {
        printf("\nMultiples cannot be checked because one digit is zero.\n");
        return;
    }

    if (first > last) {
        if (first % last == 0) {
            printf("\n%d is a multiple of %d", first, last);
            return;
        }
    } else {
        if (last % first == 0) {
            printf("\n%d is a multiple of %d", last, first);
            return;
        }
    }

    printf("\nBoth are not multiples of each other");
}

int main() {
    int number;
    int lastdigit, firstdigit;

    printf("Enter the Number: ");
    if (scanf("%d", &number) != 1 || number <= 0) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 0;
    }

    int original = number;

    while(original>0){
        if(original == number)
            lastdigit = original%10;
        original = original/10;
        if(original > 0)
            firstdigit = original;
    }

    printf("\nFirst Digit: %d, Last Digit: %d", firstdigit, lastdigit);

    multipleFinder(firstdigit, lastdigit);

    return 0;
}
