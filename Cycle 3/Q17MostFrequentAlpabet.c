//Experiment No. 17
//Most Frequent alphabet in a line of text
//Created by Joel Lijo
#include <stdio.h>
#include <ctype.h>
int main(){
    char text[500]; 
    printf("Enter the text: ");
    scanf("%[^\n]", &text); 
    int freq[26] = {0};
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] == ' ' || text[i] == '.' || text[i] == '!' || text[i] == '?') continue;
        text[i] = tolower(text[i]);
        freq[text[i] - 'a']++;
    }
    int maxCount = 0;char maxAlpha = '\0';
    for(int i = 0; i < 26; i++){
        if(maxCount < freq[i]){
            maxCount = freq[i];
            maxAlpha =  i+ 'a'; 
            
        }
    }
    printf("Most Frequent Alphabet = %c, occuring %d times", maxAlpha, maxCount);

    return 0;
}