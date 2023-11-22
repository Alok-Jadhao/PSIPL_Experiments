#include <stdio.h>

int main()
{
    int decimalint, Binaryeq[50];
    printf("Enter the decimal integer to convert: ");
    scanf("%d", &decimalint);
    int n=0;

    if(decimalint==0)
    {
        Binaryeq[0]=0;
        n=1;
    }

    else
    {
        while(decimalint>0)
        {
           Binaryeq[n]=decimalint%2;
           decimalint/=2;
           n++;
        }
    }
    printf("Binary equivalent: ");
    for(int j=n-1;j>=0;j--)
    {
        printf(" %d", Binaryeq[j]);
    }
    printf("\n");
    return 0;
}