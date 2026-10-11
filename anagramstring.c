
#include <stdio.h>

int main() {
    char a[100], b[100];
    int count[256] = {0}, i;

    printf("Enter first string: ");
    scanf("%99s", a);

    printf("Enter second string: ");
    scanf("%99s", b);

    for (i = 0; a[i] != '\0'; i++)
        count[(unsigned char)a[i]]++;

    for (i = 0; b[i] != '\0'; i++)
        count[(unsigned char)b[i]]--;

    for (i = 0; i < 256; i++) {
        if (count[i] != 0)
            break;
    }

    if (i == 256)
        printf("Strings are anagrams");
    else
        printf("Strings are not anagrams");

    return 0;
}
