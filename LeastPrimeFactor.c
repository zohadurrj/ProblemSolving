#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("Least prime of %d is 2\n", i);
        } else {
            printf("Least prime of %d is 1\n", i);
        }
    }
    return 0;
}