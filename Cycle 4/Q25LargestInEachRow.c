// Experiment No. 25
// Largest in Each Row
// Created by Joel Lijo
#include <stdio.h>

int find_max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int main()
{
    int m, n;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int mat[m][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    printf("Largest element in each row:\n");
    for (int i = 0; i < m; i++)
    {
        int max = find_max(mat[i], n);
        printf("Row %d: %d\n", i + 1, max);
    }

    return 0;
}
