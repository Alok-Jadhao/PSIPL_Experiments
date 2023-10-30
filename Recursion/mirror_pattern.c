#include<stdio.h>

void print (int n)
{
    if (n>0)
    {
        printf("%d ",n);
        print(n-5);
        printf("%d ",n);
    }

    else
        printf("%d ",n);
}

int main()
{
    printf("Enter n: ");
    int n;
    scanf("%d",&n);

    printf("The series is: ");
    print(n);
    printf("\n");

    return 0;
}