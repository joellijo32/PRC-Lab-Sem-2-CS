//Expermient No. 2
//Date Validation
//Created by Joel Lijo
#include <stdio.h>
int isLeapYear(int y)
{
    return (y%400 == 0 || (y%100 != 0 && y%4 == 0));
}

void main()
{
    printf("Enter the Date (format: dd/mm/yyyy): ");
    int day, month,year;
    scanf("%d/%d/%d",&day,&month,&year);
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