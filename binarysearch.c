#include <stdio.h>
int main() {
    int arr[100], n, i, search;
    int low, high, mid;
    int found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);
    low = 0;
    high = n - 1;
    // Binary Search
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == search) {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        } else if (arr[mid] < search) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (found == 0) {
        printf("Element not found\n");
    }
    return 0;
}