//Experiment No. 12
//Set Operations
//Created by Joel Lijo 
#include <stdio.h>
void main()
{
    printf("Number of Elements in A = ");
    int na; 
    scanf("%d", &na);
    if(na < 0)
    {
        printf("Invalid Input");
        return;
    }
    printf("Enter the elements of A: \n");
    int A[na];
    for(int i =  0; i < na;i++)
    {
        scanf("%d", &A[i]);
    }
    printf("\nNumber of Elements in B = ");
    int nb;
    scanf("%d", &nb);
    if(nb < 0)
    {
        printf("Invalid Input");
        return;
    }
    int B[nb];
    printf("Enter the Elements in B: \n");
    for(int i = 0;i < nb; i++)
    {
        scanf("%d", &B[i]);
    }

    int uni[na + nb], size = 0;
    if(na > nb)
    {
        size = na;
    }
    else size = nb;

    int intersec[size], minus[size], indb = 0, inda = 0;
    for(int i = 0; i < (na+nb); i++)
    {
        if(i > (na-1))
        {
            uni[i] = B[indb++];
        }
        else
        {
            uni[i] = A[inda++];
        }
    }
    printf("Union of A and B: \n");
    printf("{ ");
    for(int i = 0;i < (na+nb) ; i++)
    {
        if(i == 0) printf("%d", uni[i]);
        else printf(", %d", uni[i]);
    }
    printf(" }");
}