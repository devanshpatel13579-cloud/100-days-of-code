
#include <stdio.h>

int main() {
    int n, i, j, pge;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        pge = -1;

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                pge = arr[j];
                break;
            }
        }

        if (i > 0) {
            printf(",");
        }
        printf("%d", pge);
    }

    printf("\n");
    return 0;
}
