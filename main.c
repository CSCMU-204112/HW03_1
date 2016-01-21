#include "T112_HW03_1.h"

int main()
{
    int year;
    int month;

    printf("Please input year and month: ");
    scanf("%d %d", &year, &month);
    
    display_calendar(year, month);
    
 
    return 0;
}

