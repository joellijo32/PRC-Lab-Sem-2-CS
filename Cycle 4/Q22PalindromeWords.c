// Experiment No. 22
// Palindrome Words
// Created by Joel Lijo
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char word[])
{
    int i, len = strlen(word);
    for (i = 0; i < len / 2; i++)
    {
        if (tolower(word[i]) != tolower(word[len - 1 - i]))
            return 0;
    }
    return 1;
}

int main()
{
    int count = 0;
    char line[200];
    char word[50];
    int i = 0, j = 0;

    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    line[strlen(line) - 1] = '\0';

    printf("Palindrome words (if any): ");

    while (1)
    {
        char ch = line[i];

        if (ch == ' ' || ch == '\0')
        {
            word[j] = '\0';
            if (j > 0 && isPalindrome(word))
            {
                if (count == 0)
                {
                    printf("%s", word);
                    count = 1;
                }
                else
                {
                    printf(", %s", word);
                }
            }
            j = 0;
            if (ch == '\0')
                break;
        }
        else
        {
            word[j++] = ch;
        }

        i++;
    }

    if (count == 0)
    {
        printf("No Palindrome words.");
    }
    printf("\n");
    return 0;
}
