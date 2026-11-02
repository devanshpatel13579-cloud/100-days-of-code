
#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    int ch;

    // Input filenames
    printf("Enter source filename: ");
    scanf("%99s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%99s", destFile);

    // Open source file in read mode
    source = fopen(sourceFile, "r");

    if (source == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen(destFile, "w");

    if (destination == NULL) {
        printf("Error opening destination file.\n");
        fclose(source);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully!\n");

    // Close both files
    fclose(source);
    fclose(destination);

    return 0;
}
