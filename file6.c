
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *source, *destination;
    int ch;

    // Open input file in read mode
    source = fopen("input.txt", "r");

    if (source == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    destination = fopen("output.txt", "w");

    if (destination == NULL) {
        printf("Error: Cannot create output.txt\n");
        fclose(source);
        return 1;
    }

    // Read, convert, and write characters
    while ((ch = fgetc(source)) != EOF) {
        ch = toupper((unsigned char)ch);
        fputc(ch, destination);
    }

    printf("File converted successfully!\n");

    // Close both files
    fclose(source);
    fclose(destination);

    return 0;
}
