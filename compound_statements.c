// compound_statements.c -- illustrates difference between
// compound statements

#include <stdio.h>

int main() {

	int index1 = 0;
	int index2 = 0;
	int sam = 0;

	// fragment 1
	while (index1++ < 10)
		sam = 10 * index1 + 2;
	printf("sam = %d\n", sam);
	printf("\n");

	// fragment 2
	while (index2++ < 10) {
		sam = 10 * index2 + 2;
		printf("sam = %d\n", sam);
	}

	return 0;
}
