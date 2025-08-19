#include<stdio.h>
#include<Math.h>


int main() {
    int a, b, c;
    double root1, root2;

    printf("Enter the Co-Efficient of X^2: ");
    scanf("%d", &a);
    printf("Enter the Co-Efficient of X: ");
    scanf("%d", &b);
    printf("Enter the Constant: ");
    scanf("%d", &c);

    int validator = (b * b) - 4 * a * c;

    if (validator < 0) {
        printf("Roots are imaginary!\n");
    } else {
        root1 = (-b + sqrt(validator)) / (2.0 * a);
        root2 = (-b - sqrt(validator)) / (2.0 * a);
        printf("Roots are %.2lf and %.2lf\n", root1, root2);
    }
    return 0;
}

