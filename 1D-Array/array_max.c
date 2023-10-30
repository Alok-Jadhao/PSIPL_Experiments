#include <stdio.h>

float max_marks(float marks[], int n)
{
    float max=marks[0];
    for(int i=0;i<n;i++)
        if(marks[i]>max)
            max=marks[i];
    
    return max;
}

void read_array(float marks[], int n)
{
    for(int i=0;i<n;i++)
        scanf("%f", &marks[i]);
}

int main()
{
    int n;
    printf("Enter the no. of subjects: ");
    scanf("%d", &n);
    float marks[n];

    printf("Enter the marks: ");
    read_array(marks, n);

    printf("The max marks is: ");

    printf("%f",max_marks(marks, n));
    

    return 0;
}