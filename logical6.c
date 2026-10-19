
#include <stdio.h>

int main() {
    int n, i, j, nge;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        nge = -1;

        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge = arr[j];
                break;
            }
        }

        if (i > 0) {
            printf(",");
        }
        printf("%d", nge);
    }

    printf("\n");
    return 0;
}
 