#include <stdio.h>
int isLeapYear(int y)
{
    return (y%400 == 0 || (y%100 != 0 && y%4 == 0));
}

void main()
{
    char string[10];
    printf("Enter the Date (format: dd/mm/yyyy): ");
    scanf("%s", &string);
    int day = (string[0]- '0')*10 + (string[1]-'0');
    int month = (string[3]- '0')*10 + (string[4]-'0');
    int year = (string[6]- '0')*1000 + (string[7]-'0')*100 + (string[8]-'0')*10 + (string[9] -'0') ;
    int validity = 1;
    if(year < 1 || month < 1 || month > 12 || day < 1 || day > 31)  validity = 0;

   
    switch(month)
    {
        case 4: case 6: case 9: case 11:
        if(day > 30) validity = 0;
        break;
        
        case 2:
        if(isLeapYear(year)) 
        {
            if(day > 29) validity =  0;
        }
        else if(day > 28) validity = 0;
        break;

        default:  validity = 1;
    }

    if(validity) printf("Valid Date");
    else printf("Invalid Date");
    
}