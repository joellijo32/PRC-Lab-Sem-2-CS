// Experiment No. 26
// Student Details
// Created by Joel Lijo
#include <stdio.h>
#include <string.h>

struct Student
{
    int reg_no;
    char name[50];
    int marks[4];
    int total;
};

void calculate_total(struct Student *s)
{
    (*s).total = (*s).marks[0];
    for (int i = 1; i < 4; i++)
        (*s).total += (*s).marks[i];
}

void sort_by_total(struct Student s[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (s[i].total < s[j].total)
            {
                struct Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
}

void display(struct Student s[], int n)
{
    printf("\nRegNo\tName\t\tMarks\t\t\tTotal\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%-15s", s[i].reg_no, s[i].name);
        for (int j = 0; j < 4; j++)
            printf("%d ", s[i].marks[j]);
        printf("\t%d\n", s[i].total);
    }
}

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Register Number: ");
        scanf("%d", &s[i].reg_no);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter 4 marks:\n");
        for (int j = 0; j < 4; j++)
            scanf("%d", &s[i].marks[j]);
        calculate_total(&s[i]); // passing address but using (*s). inside
    }

    sort_by_total(s, n);
    display(s, n);

    return 0;
}
