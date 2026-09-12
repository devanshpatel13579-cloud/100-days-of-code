#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter number of terms: ");//user input the number of terms
    scanf("%d", &n);//store the user input in the variable n

    for (i = 1; i <= n; i++)//loop to calculate the sum of the series
     {
        sum = sum + (float)(2 * i - 1) / (2 * i);//calculate the sum of the series using the formula sum = sum + (2*i -1)/(2*i)
    }

    printf("Sum = %.2f", sum);//print the sum of the series with 2 decimal places 

    return 0;//return 0 to indicate successful execution of the program 
}
