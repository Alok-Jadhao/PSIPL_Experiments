#include <stdio.h>

void read_mat(int r, int c, int a[][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            scanf("%d", &a[i][j]);
        printf("\n");
    }
}

void print_mat(int r, int c, int a[][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

void Add_mat(int r, int c, int mat1[][c], int mat2[][c])
{
    int mat3[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {   
            mat3[i][j] = mat1[i][j]+mat2[i][j];
            
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}

void Subtraction_mat(int r, int c, int mat1[][c], int mat2[][c])
{
    int mat3[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {   
            mat3[i][j] = mat1[i][j]-mat2[i][j];
            
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}

void Multiplication_mat(int r, int c, int mat1[][c], int mat2[][c])
{

    int mat3[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {   
            mat3[i][j] = mat1[i][j]-mat2[i][j];
            
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}



int main()
{
    int r,c;
    printf("Enter no of rows: ");
    scanf("%d",&r);
    printf("Enter the no. of columns: ");
    scanf("%d",&c);

    int mat1[r][c],mat2[r][c];

    read_mat(r,c,mat1);
    printf("Now,Give the input for Matrix 2\n");
    read_mat(r,c,mat2);


    printf("The addition matrix is as follows: \n");
    Add_mat(r,c,mat1,mat2);
    printf("The Subtraction matrix is as follows: \n");
    Subtraction_mat(r,c,mat1,mat2);


    printf("Lets try multiplication of matrix now.");
    int i,j,k,l,m,n;
    printf("Enter no of rows: ");
    scanf("%d",&i);
    printf("Enter the no. of columns: ");
    scanf("%d",&j);

    printf("Enter no of rows: ");
    scanf("%d",&k);
    printf("Enter the no. of columns: ");
    scanf("%d",&l);

    if(j==k)
    {
        int mat4[i][k];
        for
    }

    else
        printf("Multiplication not possible.")
    return 0;
}