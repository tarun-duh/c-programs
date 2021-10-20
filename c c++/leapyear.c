#include <stdio.h>

int main()
{
    int year;
    printf("enter the year\n");
    scanf("%d", &year);
    if (((year % 4==0) && (year % 400==0)) || (year % 100!=0))
    {
        printf("your year %d is a leap yaer", year);
    }
    else
    {
        printf("your year %d is not a leap year", year);
    }
    return 0;
}