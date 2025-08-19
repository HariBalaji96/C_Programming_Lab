#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int number) {
    int original = number;
    int reverse = 0;

    while (number > 0) {
        reverse = reverse * 10 + number % 10;
        number = number / 10;
    }

    return reverse == original;
}

void main() {
    int flag = 0;
    int number;
    printf("\nEnter the Number: ");
    scanf("%d", &number);

    while(flag != 1){
        number = number + 1;
        if(isPalindrome(number)){
            printf("\nNext Palindrome Number: %d", number);
            flag = 1;
        }
    }

}
