#include <stdio.h>

int main()
{
    int decimalint, Binaryeq[50];
    printf("Enter the decimal integer to convert: ");
    scanf("%d",decimalint);
    int n=sizeof(decimalint)/sizeof(int);

        while(decimalint>0)
        {
            for(int i=0;i<n;i++)
            {
                Binaryeq[i]=decimalint%2;
                decimalint/=10;
            }
        }
    
    

        
        
    

    for(int j=n-1;j>=0;j--)
    {
        printf("%d",Binaryeq[j]);
    }
    printf("\n");
    return 0;
}