
#include <stdio.h>

int main() {
    char name[100];
    
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    printf("%c", name[0]);

    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ')
            printf(".%c", name[i + 1]);
    }

    printf(".");
    return 0;
}
