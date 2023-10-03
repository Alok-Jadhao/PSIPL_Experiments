#include <stdio.h>

void read_array(float [], int);
void print_array(float [], int);

int main()
{
    int n;
    printf("Enter the no. of subjects: ");
    scanf("%d", &n);
    float marks[n];

    printf("Enter the marks in %d subjects: ", n);
    read_array(marks, n);
    printf("\nThe marks are: ");
    print_array(marks, n);
    printf("\n");
    return 0;
}


void read_array(float m[], int n)
{
    for(int i=0;i<5;i++)
        scanf("%f", &m[i]);
}

void print_array(float m[], int n)
{
    for(int i=0;i<5;i++)
        printf("%.2f ", m[i]);
}