#include<stdio.h>
#include<math.h>

int main()
{
    int no;
    printf("Enter the number ");
    scanf("%d",&no);
    int i;
    for(i=2;i<no;i++)
    {    if(no%i==0)
        {
            printf("%d is not prime\n",no);
            break;
        }
    

        if(i>sqrt(no))
            printf("The number is prime");
    }
    
    return 0;
}