// Experiment No. 15
// is Symmetric
// Created by Joel Lijo
#include <stdio.h>
int main()
{
    printf("Enter size: ");
    int n;
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid Input");
        return 1;
    }
    int array[n][n];
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nArray Entered: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    int isSymmetric = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i][j] != array[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
    }
    printf("\n");
    if (isSymmetric)
    {
        printf("The array is Symmetric");
    }
    else
    {
        printf("The array is NOT a Symmetric.\n");
        printf("Transpose of the matrix: \n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", array[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}