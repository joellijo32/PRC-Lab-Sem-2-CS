//Experiment No. 8
//Linear Search
//Created by Joel Lijo
#include <stdio.h>
void main()
{
    printf("Enter the Number of Elements: ");
    int N;scanf("%d",&N);
    int list[N];
    printf("Enter the Elements :\n");
    for(int i= 0;i < N;i++)
    {
        scanf("%d",&list[i]);
    }
    printf("\nEnter the Element to Search: ");
    int element; scanf("%d",&element);
    int flag = 0;
    for(int i = 0; i< N;i++)
    {
        if(element == list[i])
        {
            printf("Element found at position: %d",(i+1));
            return;
        }
    }
    printf("Element NOT found.");
}