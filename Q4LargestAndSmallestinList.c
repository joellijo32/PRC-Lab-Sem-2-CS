//Experiment No. 4
//Largest and smallest in a list
//Created by Joel Lijo
#include <stdio.h>
void main()
{
    printf("N = ");
    int n;
    scanf("%d",&n);
    int array[n];
    printf("Enter the Elements: \n");
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&array[i]);
    }
    int largest = array[0], smallest = array[0];
    for(int i = 1;i <n;i++)
    {
        if(largest < array[i]) largest = array[i];
        if(smallest > array[i]) smallest = array[i];

    }
    printf("Largest Number = %d \nSmallest Number = %d",largest,smallest);
}