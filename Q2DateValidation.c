#include <stdio.h>
void main()
{
    char string[10];
    printf("Enter the Date (format: dd/mm/yyyy): ");
    scanf("%s", &string);
    int day = (string[0]- '0')*10 + (string[1]-'0');
    int month = (string[3]- '0')*10 + (string[4]-'0');
    int year = (string[6]- '0')*1000 + (string[7]-'0')*100 + (string[8]-'0')*10 + (string[9] -'0') ;

    if(day < 1 || month < 1 || month > 12 || year < 0 )
    {
        printf("Invalid Date");
        return;
    }

    int list[] = { 31, 28, 31, 30,31,30,31,31,30,31,30,31};
    if(year%400 == 0 || (year%4 == 0 && year%100 != 0))
    {
        list[1]= 29;
        if(month == 2 && day > 29)
        {
            
            printf("Invalid Date");
            return;
        }
    }
    
    
    if(day > list[month-1]){
        printf("Invalid Date");
        return;
    }
    
    printf("Valid Date ");

    
}