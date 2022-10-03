// pound.c -- defines a function with an argument

#include <stdio.h>

void pound(int);	// ANSI prototype

int main() {

	int times = 5;
	char ch = '!';	// ANSI code is 33
	float f = 6.0;

	pound(times);	// int argument
	pound(ch);	// char automatically --> int
	pound((int) f);	// cast forces f --> int

	return 0;
}

void pound(int n) {	// ASNI style function header
			// takes one int argument
	while (n-- > 0)
		printf("#");
	printf("\n");
}
