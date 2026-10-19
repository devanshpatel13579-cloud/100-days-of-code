
#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int i, start = 0;

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    for (i = 0; ; i++) {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\0') {
            for (int j = i - 1; j >= start; j--)
                printf("%c", s[j]);

            if (s[i] == ' ')
                printf(" ");

            start = i + 1;

            if (s[i] == '\n' || s[i] == '\0')
                break;
        }
    }

    return 0;
}
