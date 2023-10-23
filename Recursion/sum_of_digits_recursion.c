#include <stdio.h>

int sum_of_digits(int n)
{
    if(n<10)
        return n;
    else
        return n%10 + sum_of_digits(n/10);
}

int main()
{
    int n;
    printf("Enter the number n: ");
    scanf("%d", &n);

    printf("Sum of digits of %d is : %d\n",n, sum_of_digits(n));
}