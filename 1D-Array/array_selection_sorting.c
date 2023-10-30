#include <stdio.h>

void read_array(float marks[], int n)
{
    for(int i=0;i<n;i++)
        scanf("%f", &marks[i]);
}

void print_array(float m[], int n)
{
    for(int i=0;i<n;i++)
        printf("%.2f ", m[i]);
}

void selection_sort(float marks[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_indx=i;
        //finding the min of the unsorted array.
        for(int j=i+1;j<n;j++)
        {
            if(marks[j]<marks[min_indx])
                min_indx=j;
        
        }

        //swapping
        float t;
        t=marks[i];
        marks[i]=marks[min_indx];
        marks[min_indx]=t;
    }
}

int main()
{
    int n;
    printf("Enter the no. of subjects: ");
    scanf("%d", &n);
    float marks[n];

    printf("Enter the marks: ");
    read_array(marks, n);

    selection_sort(marks,n);

    print_array(marks,n);

    return 0;
}