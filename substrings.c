
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k;

    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            for (k = i; k <= j; k++)
                printf("%c", s[k]);

            printf("\n");
        }
    }

    return 0;
}
