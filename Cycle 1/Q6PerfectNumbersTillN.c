// Experiment No. 6s
// Perfect numbers till N
// Created by Joel Lijo
#include <stdio.h>
void main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    if (N < 0)
    {
        printf("Invalid Input");
        return;
    }

    printf("Perfect Numbers Till %d: \n", N);
    for (int i = 1; i <= N; i++)
    {
        int sum = 1;
        for (int j = 2; j <= (i / 2); j++)
        {
            if (i % j == 0)
                sum += j;
        }
        if (sum == i)
            printf("%d\n", i);
    }
}