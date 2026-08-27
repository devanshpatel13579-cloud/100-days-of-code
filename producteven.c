#include<stdio.h>
int main()
{
    int n,i;
    long long product = 1;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2)
    {
        product = product * i;
    }
    printf("Product of first %d even numbers is %lld",n,product);
    return 0;
}