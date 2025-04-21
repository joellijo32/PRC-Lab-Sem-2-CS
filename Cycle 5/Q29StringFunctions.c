//Experiment No. 29
//String Functions
//Created by Joel Lijo
#include <stdio.h>

int StringLength(char *s) {
    int len = 0;
    while (*s != '\0' && *s != '\n') {
        len++;
        s++;
    }
    return len;
}

void StringCopy(char *s1, char *s2) {
    while (*s2 != '\0' && *s2 != '\n') {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

int StringCompare(char *s1, char *s2) {
    while (*s1 && *s2 && *s1 != '\n' && *s2 != '\n') {
        if (*s1 != *s2)
            return *s1 - *s2;
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

void StringConcat(char *s1, char *s2) {
    while (*s1) {
        if (*s1 == '\n') {
            *s1 = '\0';
            break;
        }
        s1++;
    }
    while (*s2 && *s2 != '\n') {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

int main() {
    char str1[100], str2[100], copy[100];
    int len, cmp;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    len = StringLength(str1);
    printf("Length of first string: %d\n", len);

    StringCopy(copy, str1);
    printf("Copy of first string: %s\n", copy);

    cmp = StringCompare(str1, str2);
    if (cmp == 0)
        printf("Strings are equal\n");
    else if (cmp < 0)
        printf("First string is smaller\n");
    else
        printf("First string is greater\n");

    StringConcat(str1, str2);
    printf("After concatenation: %s\n", str1);

    return 0;
}
