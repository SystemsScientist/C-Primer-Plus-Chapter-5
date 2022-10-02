// sizeof.c -- uses sizeof operator

#include <stdio.h>

int main() {

	int n = 0;
	size_t intsize;

	intsize = sizeof(int);
	printf("\nn = %d, n has %zd bytes; all ints have %zd bytes.\n", 
		n, sizeof(n), intsize);

	printf("\n");
	return 0;
}
