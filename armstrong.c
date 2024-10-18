#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num, sum = 0, digits = 0;

    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num; 

    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, digits);
        originalNum /= 10;
    }

    return sum == num;
}

void printArmstrongInRange(int start, int end) {
    printf("Armstrong numbers between %d and %d:\n", start, end);
    for (int num = start; num <= end; num++) {
        if (isArmstrong(num)) {
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

    printArmstrongInRange(start, end);

    return 0;
}
