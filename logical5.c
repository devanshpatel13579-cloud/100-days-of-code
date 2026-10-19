
#include <stdio.h>

int main() {
    int n, i, j, count, found = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count > n / 2) {
            printf("%d\n", nums[i]);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("-1\n");
    }

    return 0;
}
