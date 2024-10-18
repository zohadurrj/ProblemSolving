#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1;
}

void printPrimesInRange(int start, int end) {
    printf("Prime numbers between %d and %d:\n", start, end);
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printPrimesInRange(start, end);

    return 0;
}
