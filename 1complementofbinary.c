#include <stdio.h>

int main() {
    long long binary, digit;
    long long result = 0;
    long long place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        digit = binary % 10;

        if (digit == 0)
            result = result + 1 * place;
        else
            result = result + 0 * place;

        place = place * 10;
        binary = binary / 10;
    }

    printf("1's Complement = %lld", result);

    return 0;
}
