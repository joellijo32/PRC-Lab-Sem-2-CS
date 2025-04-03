//Experiment No. 20
//Prime in matrix
//Created by Joel Lijo
#include <stdio.h>
#include <math.h>
int isPrime(int);
int isPrime(int n){
	if(n <2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

void main(){
	printf("No. of rows (m) = "); int m ,n; 
	scanf("%d", &m); 
	printf("No. of columns (n) = "); scanf("%d", &n);
	int arr[m][n];
	printf("Enter the array elements: \n");
	for(int i = 0; i < m;i++){
		for(int j = 0; j < n;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	printf("\nArray Entered: \n");
	for(int i = 0; i < m ;i++){
		for(int j = 0; j < n;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("Prime Numbers in the matrix (if any): \n");
	int count = 0;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n;j++){
			if(isPrime(arr[i][j])){
				if(count == 0){
					printf("%d", arr[i][j]); 
					count++;
				}
				else printf(", %d", arr[i][j]); 
			}
		}
	}
	printf("\n");
if(count ==0){
printf("No prime numbers present\n");
}

}
