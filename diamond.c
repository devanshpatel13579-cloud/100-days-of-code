#include<stdio.h>
int main() {
    int i, j;

    // Upper half
    for (i = 1; i <= 4; i++)//printing the upper half of the diamond
     {

        // Print spaces
        for (j = 1; j <= 4 - i; j++)//printing spaces before the stars
         {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++)//printing stars after the spaces
         {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for (i = 3; i >= 1; i--) //printing the lower half of the diamond 
    {

        // Print spaces
        for (j = 1; j <= 4 - i; j++)//printing spaces before the stars
         {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++)//printing stars after the spaces 
         {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
