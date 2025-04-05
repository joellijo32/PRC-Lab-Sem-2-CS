// Experiment No. 3
// GCD and LCM of two numbers
// Created by Joel Lijo
#include <stdio.h>
void main()
{
    int a, b, lcm, gcd, dup;
    printf("Enter Two Numbers: \n");
    scanf("%d%d", &a, &b);
    int product = a * b;
    if (product < 0)
    {
        printf("Invalid Input. Positive Numbers Only.");
        return;
    }
    while (b != 0)
    {
        dup = b;
        b = a % b;
        a = dup;
    }
    gcd = a;
    lcm = product / gcd;
    printf("GCD = %d and LCM = %d", gcd, lcm);
}