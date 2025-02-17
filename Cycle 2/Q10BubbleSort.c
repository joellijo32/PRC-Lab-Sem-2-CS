//Experiment No. 10
//Bubble Sort
//Created by Joel Lijo
#include <stdio.h>
void main()
{
    printf("Number of Elements = ");
    int n; scanf("%d", &n);
    if(n <0)
    {
        printf("Invalid Input.");
        return;
    }
    int array[n];
    printf("Enter the Elements: \n");
    for(int i = 0;i < n;i++)
    {
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0;j < n-i-1 ; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    printf("\nThe array sorted in ascending order:\n");
    for(int i = 0;i < n;i++)
    {
        printf("%d\n" , array[i]);
    }
    printf("\n\n");

}