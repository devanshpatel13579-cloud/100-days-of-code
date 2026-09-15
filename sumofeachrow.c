#include <stdio.h>

int main() {
    int matrix[10][10], rowSum[10];
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");

    // Read matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of each row
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;

        for (j = 0; j < cols; j++) {
            rowSum[i] = rowSum[i] + matrix[i][j];
        }
    }

    // Print row sums
    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}