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

void mat_mult(int r1, int c1, int mat1[r1][c1], int r2, int c2, int mat2[r2][c2], int mult[r1][c2]) {
    if (c1 != r2) {
        printf("Matrix multiplication is not possible. Column of mat1 must be equal to the row of mat2.\n");
        return;
    }

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            mult[i][j] = 0;
            for (int k = 0; k < c1; k++)
                mult[i][j] += mat1[i][k] * mat2[k][j];
        }
    
    // Display the result
    printf("Matrix multiplication result:\n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++)
            printf("%d ", mult[i][j]);
        printf("\n");
    }
}

void Transpose(int r,int c,int m[r][c],int t[r][c])
{
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            t[j][i]=m[i][j];
}



int main()
{
    int r1, c1;
    printf("Enter row and column of matrix: ");
    scanf("%d %d", &r1, &c1);
    int mat1[r1][c1];
    read_mat(r1, c1, mat1);
    int t[r1][c1];
    Transpose(r1,c1,mat1,t);
    printf("Matrix transpose result:\n");
    print_mat(r1,c1,t);
 
    return 0;
}