// addemup.c -- illustrates four kinds of statements

#include <stdio.h>

int main() {

	int count, sum;	// declaration statement

	count = 0;	// assignment statement
	sum = 0;	// assignment statement
	while (count++ < 20) 
		sum = sum + count; // statement
	printf("sum = %d\n", sum); // function statement

	printf("\n");
	return 0;
}
