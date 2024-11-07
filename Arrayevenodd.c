#include <stdio.h>
int main() {
    int n, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n], e[n], o[n];
    int even_count = 0, odd_count = 0;
    for (i = 0; i < n; i++) {
        arr[i]=i+1;
    }
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            e[even_count++] = arr[i];
        } else {
            o[odd_count++] = arr[i];
        }
    }
    for (i = 0; i < even_count - 1; i++) {
        for (j = i + 1; j < even_count; j++) {
            if (e[i] < e[j]) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
    for (i = 0; i < odd_count - 1; i++) {
        for (j = i + 1; j < odd_count; j++) {
            if (o[i] > o[j]) {
                temp = o[i];
                o[i] = o[j];
                o[j] = temp;
            }
        }
    }
    printf("Even numbers in descending order: ");
    for (i = 0; i < even_count; i++) {
        printf("%d ", e[i]);
    }
    printf("\n");
    printf("Odd numbers in ascending order: ");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", o[i]);
    }
    printf("\n");
    return 0;
}