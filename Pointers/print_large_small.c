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

void large_small(int *a,int n)
{
    int *pmin = a;
    int *pmax = a;
    for(int i=0;i<n;i++)
    {
        if(*pmin>*(a+i))
            pmin = (a+i);
        if(*pmax<*(a+i))
            pmax = a+i;
    }

    printf("The largest element is : %d\n", *pmax);
    printf("The smallest element is : %d\n", *pmin);

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

    large_small(a,n);



    return 0;
}