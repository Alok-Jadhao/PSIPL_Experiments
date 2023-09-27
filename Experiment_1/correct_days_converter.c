#include <stdio.h>

int main(){
    int years, weeks, number_of_days, months, days;

    scanf("%d", &number_of_days);

    years = (number_of_days)/365;
    months= (number_of_days-years*365)/30;
    weeks = ((number_of_days%365)%30)/7;
    days = number_of_days - (years * 365)- (weeks * 7)- (months * 30);


    printf("years = %d\n", years);
    printf("months = %d\n", months);
    printf("weeks = %d\n", weeks);
    printf("days = %d\n", days);

    return 0;

}