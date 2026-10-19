
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, k, length, maxLength = 0, repeated;

    printf("Enter a string: ");
    scanf("%999s", s);

    length = strlen(s);

    for (i = 0; i < length; i++) {
        int count[256] = {0};
        int currentLength = 0;

        for (j = i; j < length; j++) {
            repeated = 0;

            if (count[(unsigned char)s[j]] > 0) {
                repeated = 1;
            }

            if (repeated) {
                break;
            }

            count[(unsigned char)s[j]]++;
            currentLength++;

            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        }
    }

    printf("%d\n", maxLength);

    return 0;
}
