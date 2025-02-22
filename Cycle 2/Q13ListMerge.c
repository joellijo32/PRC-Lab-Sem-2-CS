#include <stdio.h>

void main() {
    int n1, n2;

    printf("Enter the number of elements in the first list: ");
    scanf("%d", &n1);
    if (n1 < 0) {
        printf("Invalid Input. Negative number entered.\n");
        return ;
    }

    int arr1[n1];
    printf("Enter %d elements in ascendingly sorted order:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

        for (int i = 1; i < n1; i++) {
        if (arr1[i] < arr1[i - 1]) {
            printf("List not sorted.\n");
            return ;
        }
    }

    printf("Enter the number of elements in the second list: ");
    scanf("%d", &n2);
    if (n2 < 0) {
        printf("Invalid Input. Negative number entered.\n");
        return ;
    }

    int arr2[n2];
    printf("Enter %d elements in ascendingly sorted order:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }



    for (int i = 1; i < n2; i++) {
        if (arr2[i] < arr2[i - 1]) {
            printf("List not sorted.\n");
            return ;
        }
    }

    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    while (j < n2) {
        merged[k++] = arr2[j++];
    }

    printf("Merged sorted list: ");
    for (int i = 0; i < n1 + n2; i++) {
        if(i == 0) printf("%d", merged[i]);
        else printf(", %d", merged[i]);
    }
    printf("\n");
}
