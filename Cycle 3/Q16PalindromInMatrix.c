#include <stdio.h>
int isPalindrome(int n){
    if(n<11) return 0;
    int duplicate = n; int reverse = 0;
    while(n != 0){
        reverse  = reverse*10 + (n%10);
        n /= 10;
    }
    if(reverse == duplicate) return 1;
    return 0;
}

int main(){
    int row, cols;
    printf("No. of rows = ");
    scanf("%d", &row);
    printf("No. of Columns = "); scanf("%d", &cols);
    int array[row][cols]; 
    printf("Enter the elments: \n");
    for(int i = 0; i < row; i++){
        for(int j= 0; j < cols; j++){
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nArray Entered: \n");
    for(int i = 0; i < row; i++){
        for(int  j = 0;j < cols; j++){
            printf("%d " , array[i][j]);
        }
        printf("\n");
    }

    printf("\nPalindrome No.s in the matrix: \n");
    int count = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0;j < cols;j++){
            if(isPalindrome(array[i][j])){
                if(count == 0){
                    printf("%d", array[i][j]);
                    count = 1;
                } 
                else printf(", %d", array[i][j]);
            }
            
        }
    }
}