
#include <stdio.h>

int main() {
    int n, x;
    int total, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    total = n * (n + 1) / 2;

    for (x = 1; x <= n; x++) {
        sum += x;

        if (sum == total - sum + x) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}
