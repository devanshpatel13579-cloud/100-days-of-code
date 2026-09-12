#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) //printing the pattern
    {

        for (j = 1; j < i; j++)//printing spaces before the stars
         {
            printf(" ");//printing spaces before the stars 
        }

        for (j = i; j <= 5; j++)//printing stars after the spaces
         {
            printf("*");//printing stars after the spaces
        }

        printf("\n");//moving to the next line after each row 
    }

    return 0;//indicating successful program termination
}
