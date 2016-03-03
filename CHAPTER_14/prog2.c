#include <stdio.h>

typedef enum {January, February, March, April, May, June, July, August, September, October, November, December} month;

char* monthName (month a)
{
    switch (a)
    {
    case January:
        return "January";
    case February:
        return "February";
    case March:
        return "March";
    case April:
        return "April";
    case May:
        return "May";
    case June:
        return "June";
    case July:
        return "July";
    case August:
        return "August";
    case September:
        return "September";
    case October:
        return "October";
    case November:
        return "November";
    case December:
        return "December";
    default:
        return "";
    }
}

int main (void)
{
    month month1 = October;

    printf("The month specified is %s.\n", monthName(month1));

    return 0;
}