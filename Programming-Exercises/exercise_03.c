// Exercise 3, Chapter 5, C Primer Plus
//
// Write a program that asks the user to 
// enter the number of days and then 
// converts that value to weeks and days.
// For example, it would convert 18 days
// to 2 weeks, 4 days.
// 
// Display results in teh following format:
//
// 18 days are 2 weeks, 4 days
//
// Use a while loop to allow the user the
// user to repeatedly enter day values;
// terminate the loop when the user enters
// a nonpositive value, such as 0 or -20.

#include <stdio.h>

#define DAYS 7

int main() {

	int input;
	int num_weeks;
	int num_days;

	printf("\nPlease enter the number of days ");
	printf("(<=0 to exit): \n");
	scanf("%d", &input);

	while (input > 0) {
		num_weeks = input / DAYS;
		num_days = input % DAYS;

		printf("%d days are %d weeks, %d days.\n", 
			input, num_weeks, num_days);
		printf("Please enter the number of days ");
		printf("(<=0 to exit): \n");
		scanf("%d", &input);
	}
	printf("Thank you for computing your weeks and days!\n\n");

	return 0;
}
