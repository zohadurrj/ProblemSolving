#include <stdio.h>
int count(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}
int balanced(int n) {
    int digit_count = count(n);
    if (digit_count % 2 == 0) {
        return 0;
    }
    int middle_index = digit_count / 2;
    int left_sum = 0;
    int temp = n;
    for (int i = 0; i < middle_index; i++) {
        left_sum += temp % 10;
        temp /= 10;
    }
    int right_sum = 0;
    temp = n / 10;
    for (int i = 0; i < middle_index; i++) {
        right_sum += temp % 10;
        temp /= 10;
    }
    return left_sum == right_sum;
}
int main() {
    int n;
    printf("Enter an odd-digit number: ");
    scanf("%d", &n);
    if (balanced(n)) {
        printf("%d is a balanced number.\n", n);
    } else {
        printf("%d is not a balanced number.\n", n);
    }
    return 0;
}