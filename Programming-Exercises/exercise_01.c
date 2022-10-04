// Exercise 1, Chapter 5, C Primer Plus
//
// Write a program that converts time in minutes
// to time in hours and minutes. Use #define or
// const to create a symbolic constant for 60. 
// Use a while loop to allow the user to enter 
// values repeatedly and terminate the loop if a
// value for the time of 0 or less is entered.

#include <stdio.h>

#define MINUTE 60

int main() {

	int total_minutes = 0;
	int hours = 0;
	int minutes = 0;
	
	printf("\nThis program converts minutes to hours and mintues.\n");
	printf("Please enter the total number of minutes (<=0 to quite): ");
	scanf("%d", &total_minutes);

	while (total_minutes > 0) {

		hours = total_minutes / MINUTE;
		minutes = total_minutes % MINUTE;

		printf("The number of hours: %d\n", hours);
		printf("The number of minutes: %d\n", minutes);

		printf("Please enter the total number of minutes (<=0 to quit): ");
		scanf("%d", &total_minutes);
	}
	printf("Thank you for using this program. ");
	printf("Have a wonderful day!");

	printf("\n\n");
	return 0;
}
