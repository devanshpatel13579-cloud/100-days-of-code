#include <stdio.h>

int main()
{
    int days, fine;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 5)
    {
        fine = days * 2;
        printf("Fine = Rs. %d", fine);
    }
    //If the number of late days is less than or equal to 5, then fine is calculated at the rate of Rs.2 per day;
    else if (days <= 10)
    {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine = Rs. %d", fine);
    }
    //If the no. of late days is greater than 5 but less than or equal to 10,then fine is calculated at the rate of Rs.2 per day for first 5 days and Rs.4 per day for next 5 days;

    else if (days <= 30)
    {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine = Rs. %d", fine);
    }
    //If the no. of late days is greater than 10 but less than or equal to 30,then fine is calculated at the rate of Rs.2 pr day for first 5 days,Rs.4 pr day for next 5 days and Rs.6 pr day
    
    else
    {
        printf("Membership Cancelled");
    }

    return 0;
}
