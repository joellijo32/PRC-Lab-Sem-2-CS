// Experiment No. 5
// Binary to Decimal Conversion
// Created by Joel Lijo
#include <stdio.h>
#include <math.h>
void main()
{
    int binary = 0, decimal = 0, index = 0;
    printf("Enter Binary: ");
    scanf("%d", &binary);
    while (binary != 0)
    {
        if (binary % 10 == 1)
            decimal += pow(2, index);
        binary /= 10;
        index++;
    }
    printf("Corresponding Decimal: %d", decimal);
}