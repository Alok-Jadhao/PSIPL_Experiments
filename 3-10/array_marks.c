#include <stdio.h>

int main()
{
    float marks[5];

    printf("Enter the marks in 5 subjects: ");
    for(int i=0;i<5;i++)
    {
        scanf("%f", &marks[i]);
    }
    printf("\nThe marks are: ");
    for(int i=0;i<5;i++)
    {
        printf("%.2f ", marks[i]);
    }
    printf("\n");
    return 0;
}