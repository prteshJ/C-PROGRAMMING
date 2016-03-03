// Exercise 3 to calculate elapsed time
#include <stdio.h>

struct time {
	int hour;
	int minutes;
	int seconds;
};

struct time elapsed_time(struct time timeFirst, struct time timeSecond) {
	struct time timeCalculator;

	timeCalculator.seconds = timeSecond.seconds - timeFirst.seconds;
	
	if(timeCalculator.seconds < 0) {
		timeCalculator.seconds = 60 + timeCalculator.seconds;
		--timeSecond.minutes;
	}

	timeCalculator.minutes = timeSecond.minutes - timeFirst.minutes;

	if(timeCalculator.minutes < 0) {
		timeCalculator.minutes = 60 + timeCalculator.minutes;
		--timeSecond.hour;
	}

	timeCalculator.hour = timeSecond.hour - timeFirst.hour;
	
	if(timeCalculator.hour < 0) {
		timeCalculator.hour = 24 + timeCalculator.hour;
		--timeSecond.hour;
	}

	return timeCalculator;
}

int main(void) {
	struct time time1, time2, elapsedTime;

	printf("\nEnter the first time (hh:mm:ss) ");
	scanf("%d:%d:%d",&time1.hour, &time1.minutes, &time1.seconds);

	printf("\nEnter the second time (hh:mm:ss) ");
        scanf("%d:%d:%d",&time2.hour, &time2.minutes, &time2.seconds);

	elapsedTime = elapsed_time(time1,time2);

	printf("\nThe time elapsed  is %i hours %i minutes %i seconds\n", elapsedTime.hour, elapsedTime.minutes, elapsedTime.seconds);

	return 0;	
}
