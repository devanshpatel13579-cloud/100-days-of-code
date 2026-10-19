
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, start = 0, last;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';
    last = strlen(name) - 1;

    for (i = 0; i < last; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c. ", name[start]);
            start = i + 1;
        }
    }

    printf("%s", name + start);

    return 0;
}
