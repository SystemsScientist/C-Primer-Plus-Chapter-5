// Exercise 2, Chapter 5, C Primer Plus
//
// Write a program that asks for an integer
// and then prints all the integers from 
// (and including) that value up to (and
// including) a value larger than 10. That
// is, if the input is 5, the output runs
// from 5 to 15. Be sure to separate each
// output value by a space or tab or newline.

#include <stdio.h>

int main() {

	int number;
	int count = 0;

	printf("Please enter an integer greater than zero: ");
	scanf("%d", &number);
	
	while (count <= 10) {
		
		printf("integer = %d \n", number);
		number++;
		count++;

		// this way works as well and is shorter
		// printf("integer = %d \n", number + count);
		// count++;
	}

	return 0;
}
