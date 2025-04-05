// Experiment No. 7
// Prime numbers till n
// Created by Joel Lijo
#include <stdio.h>
#include <math.h>
void main()
{
    printf("N = ");
    int N;
    scanf("%d", &N);
    if (N <= 1)
    {
        printf("Invalid Input");
        return;
    }
    printf("Prime Numbers Till N: \n");
    for (int i = 2; i <= N; i++)
    {
        int isPrime = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d\n", i);
    }
}