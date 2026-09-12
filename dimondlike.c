#include <stdio.h>

int main() {
    int i, j;

    /* Upper half */
    for (i = 1; i <= 5; i++)//printing the upper half of the diamond
     {
        for (j = 1; j <= 2 * i - 1; j++)//printing stars in each row
         {
            printf("*");
        }

        printf("\n");
    }

    /* Lower half */
    for (i = 4; i >= 1; i--)//printing the lower half of the diamond
     {
        for (j = 1; j <= 2 * i - 1; j++)//printing stars in each row
         {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
