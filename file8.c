
#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    long long sum = 0;
    double average;

    // Open the file in read mode
    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error: Cannot open numbers.txt\n");
        return 1;
    }

    // Read integers and calculate sum
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No integers found in the file.\n");
        return 0;
    }

    // Calculate average
    average = (double)sum / count;

    // Display results
    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
