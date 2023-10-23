#include <stdio.h>

int factorial(int n)
{
    if(n>0)
        return factorial(n-1)*n;
    if(n<=0)
        return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("The factorial of %d is : %d\n",n, factorial(n));
}