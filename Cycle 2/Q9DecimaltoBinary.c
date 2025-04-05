// Experiment No. 9
// Decimal to binary
// Created by Joel Lijo
#include <stdio.h>
void main()
{
    printf("Enter a Decimal Integer: ");
    int decimal;
    scanf("%d", &decimal);
    if (decimal < 0)
    {
        printf("Invalid Input. Positive Integers Only.");
        return;
    }
    int binary[33];
    int index = 0;
    while (decimal >= 1)
    {
        int rem = decimal % 2;
        decimal /= 2;
        binary[index++] = rem;
    }
    index--;
    for (int i = index; i > -1; i--)
    {
        printf("%d", binary[i]);
    }
}