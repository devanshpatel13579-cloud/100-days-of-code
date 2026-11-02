
#include <stdio.h>

int main() {
    FILE *fp;
    int n, i;
    char name[50];
    int roll;
    float marks;

    // Open file in write mode
    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Store student records
    for (i = 0; i < n; i++) {
        printf("\nEnter name, roll number and marks:\n");
        scanf("%49s %d %f", name, &roll, &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    // Open file in read mode
    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    // Read and display student records
    while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s\n", name);
        printf("Roll Number: %d\n", roll);
        printf("Marks: %.2f\n\n", marks);
    }

    fclose(fp);

    return 0;
}
