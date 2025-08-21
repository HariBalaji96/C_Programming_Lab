#include <stdio.h>
#include <math.h>

double fact(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

int main(void) {
    int n = 20;
    double x;
    double result = 0.0;

    printf("Enter the value of X: ");
    scanf("%lf", &x);
    for (int k = 0; k < n; k++) {
        result += (pow(-1, k) * pow(x / 2.0, 2 * k)) / (fact(k) * fact(k));
    }

    printf("Result = %.4lf\n",result);
    return 0;
}
