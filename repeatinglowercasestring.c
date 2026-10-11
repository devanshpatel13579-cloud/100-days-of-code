
#include <stdio.h>

int main() {
    char str[100];
    int i, j, found = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            for (j = 0; j < i; j++) {
                if (str[i] == str[j]) {
                    printf("First repeating character: %c", str[i]);
                    found = 1;
                    break;
                }
            }
        }
        if (found)
            break;
    }

    if (!found)
        printf("No repeating lowercase alphabet");

    return 0;
}
