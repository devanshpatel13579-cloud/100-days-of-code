
#include <stdio.h>

int main() {
    int n, i, j, isPrime;
    int arr[100];

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Store numbers from 1 to n in the array
    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Prime numbers from 1 to %d are:\n", n);

    // Check each number for prime
    for (i = 0; i < n; i++) {
        if (arr[i] < 2)
            continue;

        isPrime = 1;

        for (j = 2; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", arr[i]);
    }

    return 0;
}