#include <stdio.h>
int main()
{ 
    int choice;
    float a, b;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result: %f\n", a + b);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result: %f\n", a - b);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result: %f\n", a * b);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            if(b != 0)
                printf("Result: %f\n", a / b);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}