//Experiment No. 14
//Largest in a matrix
//Created by Joel Lijo
#include <stdio.h>
int main(){
    printf("No. of rows = "); int m , n; scanf("%d", &m);
    printf("No. of columns = "); scanf("%d", &n);
    if(m <= 0 || n <= 0){
        printf("Invalid Input"); return 1;
    }
    int array[m][n];
    printf("Enter the elements: \n");
    for(int i = 0; i < m;i++){
        for(int j = 0;j < n;j++){
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nArray Entered: \n");
    for(int i = 0; i < m;i++){
        for(int j = 0; j < n;j++){
            printf("%d ", array[i][j]);
        }printf("\n");
    }

    int largest = 0, row = 0, cols = 0;
    for(int i = 0; i < m;i++){
        for(int j = 0;j < n;j++){
            if(largest < array[i][j]){
                largest = array[i][j];
                row = i+1; cols = j+1;
            }
        }
    }

    printf("Largest element array in the matrix: %d, at row: %d and column: %d", largest, row, cols);
}