
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;

    // Ask the user for the filename
    printf("Enter filename: ");
    scanf("%99s", filename);

    // Open the file in read mode
    fp = fopen(filename, "r");

    // Check whether the file exists
    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    // Read and display the file content
    printf("\nFile content:\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}
