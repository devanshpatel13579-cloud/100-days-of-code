
#include <stdio.h>

int main() {
    char str[200], word[100];
    int i, j, len = 0, max = 0, start = 0;

    printf("Enter a sentence: ");
    scanf("%199[^\n]", str);

    for (i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            len++;
        } else {
            if (len > max) {
                max = len;
                start = i - len;
            }
            len = 0;
        }

        if (str[i] == '\0')
            break;
    }

    for (i = 0; i < max; i++)
        word[i] = str[start + i];

    word[max] = '\0';

    printf("Longest word: %s\n", word);
    printf("Length: %d", max);

    return 0;
}
