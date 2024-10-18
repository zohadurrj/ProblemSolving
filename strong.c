#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

void printPerfectNumbers(int start, int end) {
    printf("Perfect numbers between %d and %d:\n", start, end);
    for (int num = start; num <= end; num++) {
        if (isPerfect(num)) {
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

    printPerfectNumbers(start, end);

    return 0;
}
