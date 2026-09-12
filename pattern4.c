#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)//outer loop for rows
    {
        for(j=1;j<=i;j++)//printing pattern 
        {
            printf("%d",j);//program to print the pattern of number in each row
        }
        printf("\n");//printing new line after each row
    }
    return 0;//return 0 to indicate successful execution of the program
}
