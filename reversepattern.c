#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++)//printing the pattern
     {
        for (j = 6 - i; j <= 5; j++)//printing the numbers in reverse order
        
         {
            printf("%d", j);//printing the numbers in reverse order
        }

        printf("\n");//moving to the next line after each row
    }

    return 0;//indicating successful program termination
}
