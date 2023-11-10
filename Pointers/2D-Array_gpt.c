#include <stdio.h>
#include <stdlib.h>

void matrix_add(int r, int c, int m[r][c], int n[r][c], int m_add[r][c]) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            m_add[i][j] = m[i][j] + n[i][j];
}

void m_read(int r, int c, int m[r][c]) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
}

void m_print(int r, int c, int m[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

int main() {
    int r, c;
    printf("Enter row: ");
    scanf("%d", &r);
    printf("Enter column: ");
    scanf("%d", &c);

    int (*m)[c] = malloc(sizeof(int[r][c])); // Allocate memory for m
    int (*n)[c] = malloc(sizeof(int[r][c])); // Allocate memory for n
    int (*m_add)[c] = malloc(sizeof(int[r][c])); // Allocate memory for m_add

    m_read(r, c, m);
    m_read(r, c, n);

    matrix_add(r, c, m, n, m_add);

    printf("Matrix m:\n");
    m_print(r, c, m);

    printf("Matrix n:\n");
    m_print(r, c, n);

    printf("Matrix Sum:\n");
    m_print(r, c, m_add);

    // Free allocated memory
    free(m);
    free(n);
    free(m_add);

    return 0;
}
