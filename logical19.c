
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    if (str[0] != '\0' && str[0] != '\n') {
        str[0] = toupper(str[0]);
    }

    printf("%s", str);

    return 0;
}
