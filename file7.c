
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch, vowels = 0, consonants = 0;

    // Input filename
    printf("Enter filename: ");
    scanf("%99s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    // Read each character
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower((unsigned char)ch);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Display results
    printf("Total vowels = %d\n", vowels);
    printf("Total consonants = %d\n", consonants);

    fclose(fp);

    return 0;
}
