// Question 1, Chapter 5, C Primer Plus
//
// Assume all variables are of type int.
// Find the value of each of the following
// variables.
//
// 	a. x = (2 + 3) * 6;
//
// 	b. x = (12 + 6 ) / 2 * 3;
//
// 	c. y = x = (2 + 3) / 4;
//
// 	d. y = 3 + 2 * ( x = 7 / 2);

#include <stdio.h>

int main() {

	int x;
	int y;

	x = (2 + 3) * 6;
	printf("x = %d\n", x);

	x = (12 + 6) / 2 * 3;
	printf("x = %d\n", x);

	y = x = (2 + 3) / 4;
	printf("y = %d\n", y);

	return 0;
}
