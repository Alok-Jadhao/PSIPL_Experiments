#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
    int no;
    printf("Enter the number ");
    scanf("%d",&no);
    int i;

    if (no==1)
    {
        printf("%d is neither prime nor composite.\n", no);
        break;
    }

    for(i=2;i*i<=no;i++)
    {    if(no%i==0)
        {
            printf("%d is not prime\n",no);
            break;
        }
    }

        if(i>sqrt(no))
            printf("The number is prime\n");
    
    }
    return 0;
}