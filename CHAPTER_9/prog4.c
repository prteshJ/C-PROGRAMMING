// Exercise 2 in Chapter 9

#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

struct decide {
	int choice1;
	int choice2;
	int choice3;
	int flag;
};

struct days {
	int day;
	char dayNames[10];
};


int main(void) {
	struct date firstDate, secondDate;
	struct decide choiceDate;
	int daysCalculator(struct date d, int flag);
	int N1, N2, numberOfDays;
	int dayFinder;

 	const struct days daysInformation[7] = { { 0 , {'S','u','n','d','a','y'}}, { 1, {'M','o','n','d','a','y'}}, { 2, {'T','u','e','s','d','a','y'}}, 
					         { 3, {'W','e','d','n','e','s','d','a','y'}}, { 4, {'T','h','u','r','s','d','a','y'}}, 
						 { 5, {'F','r','i','d','a','y'}}, { 6, {'S','a','t','u','r','d','a','y'}} };

	printf("\n------------------------EXERCISE-2----------------------\n");

		printf("\nYour entered dates are after March 1 1900? (0/1) :");
		scanf("%i",&choiceDate.choice1);

	if(choiceDate.choice1) {

		choiceDate.flag = 1;
		printf("\n--------------------------------------------------------\n");
	}
	else {
		printf("\nAre your entered dates between March 1 1800 to February 28 1900 (0/1) :");
		scanf("%i", &choiceDate.choice2);

		if(choiceDate.choice2) {
				choiceDate.flag = 2;
			                printf("\n--------------------------------------------------------\n");
		}
		else {
			printf("\nAre your entered dates between March 1 1700 and February 28 1800 (0 / 1): ");
			scanf("%i", &choiceDate.choice3);

			if(choiceDate.choice3) {
					        choiceDate.flag = 3;
			        	        printf("\n--------------------------------------------------------\n");
			}
		}
	}

	if(choiceDate.choice3 == 0 && choiceDate.choice2 == 0 && choiceDate.choice1 == 0) {
			choiceDate.flag = -1;
			printf("You entered invalid data ... Program will halt now ...\n");
	}

	if(choiceDate.flag != -1) {

		printf("Enter first date (mm dd yyyy): ");
		scanf("%d%d%d", &firstDate.month, &firstDate.day, &firstDate.year);
		printf("\n--------------------------------------------------------\n");
		printf("The date entered is %i th day %i month %i year", firstDate.day, firstDate.month, firstDate.year);
		printf("\n--------------------------------------------------------\n");
	
		N1 = daysCalculator(firstDate, choiceDate.flag);
		printf("The value of N for first date = %i", N1);
	        printf("\n--------------------------------------------------------\n");
		dayFinder = (N1 - 621049 ) % 7;
		printf("\nThe date falls on a %s\n", daysInformation[dayFinder].dayNames);
		printf("\n--------------------------------------------------------\n");

		printf("Enter second date (mm dd yyyy): ");
	        scanf("%d%d%d", &secondDate.month, &secondDate.day, &secondDate.year);
       		printf("\n--------------------------------------------------------\n");
        	printf("The date entered is %i th day %i month %i year", secondDate.day, secondDate.month, secondDate.year);
        	printf("\n--------------------------------------------------------\n");

		N2 = daysCalculator(secondDate,choiceDate.flag);
		printf("The value of N for second  date = %i", N2);
		dayFinder = (N2 - 621049 ) % 7;
                printf("\nThe date falls on a %s\n", daysInformation[dayFinder].dayNames);
        	printf("\n--------------------------------------------------------\n");

		if(N1 > N2)
			numberOfDays = N1 - N2;
		else
			numberOfDays = N2 - N1;

		printf("The number of days between two given dates are %i\n",numberOfDays);
		printf("\n--------------------------------------------------------\n");

	}

		return 0;
}

int daysCalculator(struct date dt, int flag) {
	int f(int year, int month);
	int g(int month);
	int N_val;
 
 	if (flag == 1) {
		N_val = (1461 * f(dt.year,dt.month)) / 4 + (153 * g(dt.month)) / 5 + dt.day;
	}
	if (flag == 2) {
		N_val = (1461 * f(dt.year,dt.month)) / 4 + (153 * g(dt.month)) / 5 + dt.day + 1;
	}
	if (flag == 3) {
		N_val = (1461 * f(dt.year,dt.month)) / 4 + (153 * g(dt.month)) / 5 + dt.day + 2;
	}
	
	// N_val + 1 for dates from March 1 1800 to February 28 1900
	// N_val + 2 for dates from March 1 1700 to February 28 1800
	
	return N_val; 
}

int f(int year, int month) {
	int f_val;

	if(month <= 2)
		f_val = year - 1;
	else
		f_val = year;

	return f_val;
}

int g(int month) {
	int g_val;

	if(month <= 2)
		g_val= month + 13;
	else
		g_val = month + 1;

	return g_val;
}

