#include<stdio.h>

void matrix_add(int *(*(m+r)+c),int *(*(n+r)+c))
{
    int *(*(m_add+r)+c);
    for(int i=0;i<r-1;i++)
        for(int i=0;i<c-1;i++)
        {
            *(*(m_add+i)+j)= *(*(m+)+c)+ *(*(m+i)+j);
        }
}

void m_read(int r,int c,int (*m)[c])
{
    for(int i=0;i<r-1;i++)
        for(int i=0;i<c-1;i++)
        {
            scanf("%d",(*(m+i)+j));
        }
}

void m_print(int *(*(m+r)+c))
{
    for(int i=0;i<r-1;i++)
        for(int i=0;i<c-1;i++)
        {
            printf("%d",*(*(m+i)+j));
        }
}

int main()
{
    int r,c;
    printf("Enter row: ");
    scanf("%d",&r);
    printf("Enter column: ");
    scanf("%d",&c);

    int *(*(m+r)+c);
    int *(*(n+r)+c);
    int *(*(m_add+r)+c);

    m_read(*(*(m+r)+c));
    m_read(*(*(n+r)+c));

    matrix_add(*(*(m+r)+c),*(*(n+r)+c));

    m_print(*(*(m+r)+c),*(*(n+r)+c));

    return 0;
}