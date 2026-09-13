#include <stdio.h>
int main() {
    long long n;
    int digit, count[10] = {0};
    int i, maxCount = 0, maxDigit = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);
    // Count each digit
    if (n < 0) n = -n;
    if (n == 0) count[0] = 1;
    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }
    // Find the digit with maximum count
    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }
    printf("Digit occurring the most times = %d\n", maxDigit);
    printf("It occurs %d times\n", maxCount);
    return 0;
}