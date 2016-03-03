/*********************************************************
    Exercise 11
		Given the definition of a date structure as defined in 
this chapter, write a function called dateUpdate() that takes a pointer 
to a date structure as its argument and that updates the structure to 
the following day (see Program 8.4).
*********************************************************/

/* Program to determine tomorrow's date */

#include <stdio.h>
#include <stdbool.h>

struct  date
{
    int  month;
    int  day;
    int  year;
};

/* Function to calculate tomorrow's date */

void dateUpdate (struct date*  today)
{
    int  numberOfDays (struct date  d);

    if ( today->day != numberOfDays (*today) )
    {
        today->day = today->day + 1;
        today->month = today->month;
        today->year = today->year;
    }
    else if ( today->month == 12 )         // end of year
    {
        today->day = 1;
        today->month = 1;
        today->year = today->year + 1;
    }
    else                                  // end of month
    {
        today->day = 1;
        today->month = today->month + 1;
        today->year = today->year;
    }
}

/* Function to find the number of days in a month */

int  numberOfDays  (struct date  d)
{
    int  days;
    bool isLeapYear (struct date  d);
    const int  daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if ( isLeapYear (d)  &&  d.month == 2 )
        days = 29;
    else
        days = daysPerMonth[d.month - 1];

    return days;
}

/* Function to determine if it's a leap year */

bool  isLeapYear (struct date  d)
{
    bool  leapYearFlag;

    if ( (d.year % 4 == 0  &&  d.year % 100 != 0)  || d.year % 400 == 0 )
        leapYearFlag = true;    // It's a leap year
    else
        leapYearFlag = false;   // Not a leap year

    return leapYearFlag;
}

int main (void)
{
    void  dateUpdate (struct date*  today);
    struct date  Day;

    printf ("Enter today's date (mm dd yyyy): ");
    scanf ("%i%i%i", &Day.month, &Day.day, &Day.year);
    dateUpdate (&Day);
    printf ("Tomorrow's date is %i/%i/%.2i.\n", Day.month, Day.day, Day.year % 100);

    return 0;
}
