#include<stdio.h>
int main()
{
    int arr[10],i,even=0,odd=0;//declaring an array of 10 integers to store the numbers and initializing even and odd counters to 0
    printf("Enter 10 numbers : \n");//prompting the user to enter 10 numbers
    for(i=0; i<10; i++)//looping through the array to read 10 numbers from user input
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<10;i++)//looping through the array to check if the numbers are even or odd
    {
        if(arr[i]%2==0)//checking if the number is even 
        {
            even++;
        }
        else
        {
            odd++;
        }
        }
    printf("Even numbers = %d\n", even);//printing the count of even numbers
    printf("Odd numbers = %d\n", odd);//printing the count of odd numbers
    return 0;
}
