// Solution to Chapter 9 Exercise 5 Programming in C Kochan 3rd Edition

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct dateAndTime 
{
	struct date sdate;
	struct time stime;
};

//
// Function to update time by one second
//

struct time timeUpdate(struct time now)
{
	++now.seconds;

	if (now.seconds == 60) {
		now.seconds = 0;
		++now.minutes;

		if (now.minutes == 60) {
			now.minutes = 0;
			++now.hour;

			if (now.hour == 24)
				now.hour = 0;
		}
	}
	return now;
}

//
// Functions to calculate tomorrow's date
//

struct date dateUpdate(struct date today)
{
	struct date tomorrow;
	int numberOfDays(struct date d);


	if (today.day != numberOfDays(today)) {
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	else if (today.month == 12) {
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}
	else {
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}
	return tomorrow;
}


int numberOfDays(struct date d)
{
	int days;
	int isLeapYear(struct date d);

	const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (isLeapYear(d) && d.month == 2)
		days = 29;
	else 
		days = daysPerMonth[d.month - 1];

	return days;
}


int isLeapYear(struct date d)
{
	bool leapYearFlag;

	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
		leapYearFlag = true;
	else
		leapYearFlag = false;

	return leapYearFlag;
}


struct dateAndTime clockKeeper(struct dateAndTime dt)
{
	dt.stime = timeUpdate(dt.stime);

	if (dt.stime.hour == 0 && dt.stime.minutes == 0 && dt.stime.seconds == 0)
		dt.sdate = dateUpdate(dt.sdate);

	return dt;
}


int main(void)
{
	struct dateAndTime event1 = {{2, 1, 2015}, {23, 59, 59}};
	struct dateAndTime event2 = {{2, 1, 2015}, {22, 22, 22}};
	struct dateAndTime event3 = {{2, 28, 2016}, {23, 59, 59}};

	event1 = clockKeeper(event1);
	event2 = clockKeeper(event2);
	event3 = clockKeeper(event3);

	printf("\nUpdated event is on:\nTime - %i:%i:%i\nDate - %i/%i/%i\n",
			event1.stime.hour, event1.stime.minutes, event1.stime.seconds,
			event1.sdate.month, event1.sdate.day, event1.sdate.year);

	printf("\nUpdated event is on:\nTime - %i:%i:%i\nDate - %i/%i/%i\n",
			event2.stime.hour, event2.stime.minutes, event2.stime.seconds,
			event2.sdate.month, event2.sdate.day, event2.sdate.year);

	printf("\nUpdated event is on:\nTime - %i:%i:%i\nDate - %i/%i/%i\n",
			event3.stime.hour, event3.stime.minutes, event3.stime.seconds,
			event3.sdate.month, event3.sdate.day, event3.sdate.year);

	return 0;
}
