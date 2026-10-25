
#include <stdio.h>

int main() {
    int m, n, i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int a[m];

    printf("Enter first sorted array: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int b[n];
    int c[m + n];

    printf("Enter second sorted array: ");
    for (j = 0; j < n; j++) {
        scanf("%d", &b[j]);
    }

    i = 0;
    j = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < m) {
        c[k++] = a[i++];
    }

    while (j < n) {
        c[k++] = b[j++];
    }

    printf("Merged array: ");
    for (i = 0; i < m + n; i++) {
        printf("%d ", c[i]);
    }

    printf("\n");
    return 0;
}
