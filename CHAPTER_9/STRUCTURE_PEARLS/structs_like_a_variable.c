// Structures behave like variables and unlike arrays
// Whenever you pass a structure to a function as a argument , you are passing a copy of it and the original structure remains unaffected
// In case of arrays , when you pass an array , you are actually passing its memory location , so any modifications that function does are done on the original array
// I mean you are passing reference to whole array (where it can be found in memory)

#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

int main(void) {
	struct date today;
	void structIsLikeVariables(struct date d);

	printf("Enter a date (mm dd yyyy): ");
	scanf("%d %d %d", &today.month, &today.day, &today.year);

	printf("--------------------------------------------------------------------\n");
	printf("Before passing values are : day %i month %i year %i\n", today.day, today.month, today.year);	
	printf("--------------------------------------------------------------------\n");
	printf("Going inside function .. 3 .. 2 .. 1 ...GO !!!\n");
	structIsLikeVariables(today);
	printf("Returned back to main safely ...\n");
	printf("--------------------------------------------------------------------\n");
	printf("After passing original struct to a function & returning to main...\n");
	printf("Values of original struct are now: day %i month %i year %i\n", today.day, today.month, today.year);
	printf("--------------------------------------------------------------------\n");

	return 0;
} 

void structIsLikeVariables(struct date guessMe) {
	int newDay , newMonth, newYear;
	
	newDay = guessMe.day + 1;
	newMonth = guessMe.month + 1;
	newYear = guessMe.year + 1;
	printf("--------------------------------------------------------------------\n");
	printf("I reached safely inside function ... :) :) :)\n");
	printf("I am inside a function and new structure values are: \n");
	printf("  day  %.2i  month  %i  year  %i\n", newDay, newMonth, newYear);
	printf("--------------------------------------------------------------------\n");
	printf("Now exiting the function ... Going back to main ...\n");
}
