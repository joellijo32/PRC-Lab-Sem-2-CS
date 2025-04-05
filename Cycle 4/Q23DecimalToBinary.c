#include <stdio.h>

void binary(int); 
void binary(int num){
    if(num == 0) return ;
    else{
        binary(num/2); 
        printf("%d", num%2);
    }
}

void main(){
    printf("Number of elements = "); int size; scanf("%d", &size);
    if(size < 0){
        printf("Invalid Input"); 
        return ;
    }
    printf("\nEnter the Numbers: \n");
    int numbers[size] ; 
    for(int i = 0; i < size; i++){
        printf("Number %d: ", (i+1)); 
        scanf("%d", &numbers[i]);
    }
    printf("\nBinary Equivalent of the numbers: \n");
    for(int i = 0; i < size; i++){
        printf("%d  :  ", numbers[i]); 
        binary(numbers[i]);
        printf("\n");
    }
}