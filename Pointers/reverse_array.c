#include<stdio.h>

void reverse_array(int *a,int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp;
        temp = *(a+(n-1-i));
        *(a+(n-1-i))=*(a+i);
        *(a+i)= temp;

    }
}

void print_array(int *a,int n)
{
    for(int i=0;i<n;i++)
        printf("%d  ",*(a+i));
    printf("\n");
}



int main()
{
    int a[10],n;
    printf("Enter no. of elements in array: ");
    scanf("%d",&n);
    printf("Enter the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }

    reverse_array(a,n);

    printf("The reversed array is: ");
    print_array(a,n);




    return 0;
}
