//Experiment No. 18
//Alphabetic Sorting
//Created by Joel Lijo
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char str[100]; 
void toLower();


void toLower(){
	int len = strlen(str); 
	for(int i = 0; i < len; i++){
		str[i] = tolower(str[i]);
	}
}


int main(){
printf("Enter string: "); scanf("%[^\n]", str);
toLower(str); int len = strlen(str); int small, pos;
for(int i = 0; i < len-1; i++){
	small = str[i]; pos = i;
	for(int j = i+1; j <len; j++){
		if(small > str[j]){
			small = str[j]; 
			pos = j;
		}
	}
	str[pos] = str[i]; 
	str[i] = small;
}

printf("Sorted String: \n");
printf("%s", str);
}

