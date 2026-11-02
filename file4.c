
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[500];

    // Input filename
    printf("Enter filename: ");
    scanf("%99s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Clear the newline left by scanf
    getchar();

    // Input new text
    printf("Enter a line to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to the file
    fputs(text, fp);

    printf("Text appended successfully!\n");

    // Close file
    fclose(fp);

    return 0;
}
