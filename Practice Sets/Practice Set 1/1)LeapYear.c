#include <stdio.h>

int main()
{
    int Year;
    printf("Enter the year to check: ");
    scanf("%d",&Year);
    if(Year%4==0)
    {
        printf("%d is a leap year", Year);
    }
    else
        printf("%d is not a leap year", Year);

    return 0;
}