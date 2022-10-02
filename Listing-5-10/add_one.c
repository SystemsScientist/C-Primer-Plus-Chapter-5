// add_one.c -- uses incrementing: prefix and postfix

#include <stdio.h>

int main() {

	int ultra = 0, super = 0;

	while (super < 5) {
		super++;
		++ultra;
		printf("super = %d, ultra = %d \n", super, ultra);
	}

	printf("\n");
	return 0;
}
