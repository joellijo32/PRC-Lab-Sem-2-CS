#include <stdio.h>

void main() {
    int n, m;
    printf("Enter number of elements in set A: ");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Invalid Input. Negative number Entered.");
        return ;
    }

    int A[n];
    printf("Enter elements of set A: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] == A[j]) {
                printf("Error: Set A contains duplicate elements.\n");
                return ;
            }
        }
    }


    printf("Enter number of elements in set B: ");
    scanf("%d", &m);
    

    if(m < 0)
    {
        printf("Invalid Input. Negative number Entered.");
        return;
    }
    int B[m];
    printf("Enter elements of set B: \n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (B[i] == B[j]) {
                printf("Error: Set B contains duplicate elements.\n");
                return ;
            }
        }
    }

    printf("A union B = { ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    for (int i = 0; i < m; i++) {
        int present = 0;
        for (int j = 0; j < n; j++) {
            if (B[i] == A[j]) {
                present = 1;
                break;
            }
        }
        if (!present) {
            printf("%d ", B[i]);
        }
    }
    printf("}\n");
    printf("A intersection B = { ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                break;
            }
        }
    }
    printf("}\n");
    printf("A - B = { ");
    for (int i = 0; i < n; i++) {
        int present = 0;
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                present = 1;
                break;
            }
        }
        if (!present) {
            printf("%d ", A[i]);
        }
    }
    printf("}\n");
    return ;
}
