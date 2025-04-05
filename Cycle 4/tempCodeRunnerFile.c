#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char[]);

int main()
{
    printf("Enter the text:\n");
    char text[300];
    fgets(text, 300, stdin);
    text[strlen(text) - 1] = '\0';
    int length = strlen(text);
    int i = 0, j = 0;
    char word[70];
    int count = 0;
    while (1)
    {
        char ch = text[i];
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
                    printf(", %s", word);
            }
            j = 0;
            if (ch == '\0')
                break;
        }
        else
        {
            word[j++] = ch;
        }
    }

    printf("\n\n");
}

int isPalindrome(char wrd[])
{
    for (int i = 0; i < strlen(wrd); i++)
    {
        if (tolower(wrd[i]) != tolower(wrd[strlen(wrd) - 1 - i]))
            return 0;
    }
    return 1;
}
