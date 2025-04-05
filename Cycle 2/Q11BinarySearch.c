// Experiment No. 11
// Binary Search
// Created by Joel Lijo Mathew
#include <stdio.h>
void main()
{
    printf("Number of Elements = ");
    int n;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Invalid Input. Positive Integers Only.");
        return;
    }
    printf("Enter the Elements of the Array: \n");
    int array[n];
    int left = 0, right = n - 1, mid, element;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nEnter the Search Element: ");
    scanf("%d", &element);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }
    int flag = 0;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (array[mid] == element)
        {
            flag = 1;
            break;
        }
        if (array[mid] < element)
        {
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    printf("\n");
    if (flag)
    {
        printf("Element Found.");
    }
    else
        printf("Element NOT found.");
}