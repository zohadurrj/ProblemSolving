#include <stdio.h>

int factorialHelper(int n, int acc) {
    if (n == 0 || n == 1) {
        return acc; 
    }
    return factorialHelper(n - 1, n * acc); 
}

int factorial(int n) {
    return factorialHelper(n, 1); 
}

int main() {
    int number;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(number);
        printf("Factorial of %d is %d.\n", number, result);
    }

    return 0;
}
