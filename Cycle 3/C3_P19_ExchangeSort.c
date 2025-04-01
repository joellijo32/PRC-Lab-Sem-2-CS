//Experiment No. 19
//Alphabetic order using exchange sort
//Created by Joel Lijo 
#include <stdio.h>
#include <string.h>
void main(){
	int N;
	printf("Enter no. of names: ");
	scanf("%d", &N);
	getchar();
	char names[N][100]; 
	printf("Enter names: \n");
	for(int i = 0; i < N;i++){
		fgets(names[i], sizeof(names[i]), stdin);
	}
	for(int i= 0; i < N-1; i++){
		for(int j = i+1; j < N;j++){
			if(strcmp(names[i], names[j]) > 0){
				char temp[100]; 
				strcpy(temp, names[i]);
				strcpy(names[i], names[j]); 
				strcpy(names[j], temp); 
			}
		}
	}
	printf("Names in sorted order:\n");
	for(int i = 0 ; i < N;i++)
		printf("%s\n", names[i]);
}

