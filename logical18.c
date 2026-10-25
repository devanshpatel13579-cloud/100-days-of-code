
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    int total = n * (n + 1) / 2;
    int missing = total - sum;

    printf("Missing number = %d", missing);

    return 0;
}
