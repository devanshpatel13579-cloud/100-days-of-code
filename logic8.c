
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int product = 1;

    // Calculate prefix products
    for (i = 0; i < n; i++) {
        answer[i] = product;
        product *= nums[i];
    }

    product = 1;

    // Multiply by suffix products
    for (i = n - 1; i >= 0; i--) {
        answer[i] *= product;
        product *= nums[i];
    }

    printf("Output: ");
    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) {
            printf(",");
        }
    }

    printf("\n");
    return 0;
}
