// Experiment No. 24
// Matrix Multiplication
// Created by Joel Lijo

#include <stdio.h>

void read(int r, int c, int mat[r][c])
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
}

void multiply(int r1, int c1, int c2, int a[r1][c1], int b[c1][c2], int res[r1][c2])
{
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++)
                res[i][j] += a[i][k] * b[k][j];
        }
}

void display(int r, int c, int mat[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

int main()
{
    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Multiplication not possible\n");
        return 0;
    }

    int a[r1][c1], b[r2][c2], res[r1][c2];

    printf("Enter elements of first matrix:\n");
    read(r1, c1, a);
    printf("Enter elements of second matrix:\n");
    read(r2, c2, b);

    multiply(r1, c1, c2, a, b, res);

    printf("Product of the matrices:\n");
    display(r1, c2, res);

    return 0;
}
