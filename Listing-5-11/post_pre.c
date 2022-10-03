// post_pre.c -- compares postfix vs prefix

#include <stdio.h>

int main() {

	int a = 1, b = 1;
	int aplus, plusb;
	
	// postfix: a is changed after its value is used
	aplus = a++;

	// prefix: b is changed before its value is used
	plusb = ++b;
	
	printf("\na   aplus   b   plusb \n");
	printf("%1d %5d %5d %5d\n", a, aplus, b, plusb);

	printf("\n");
	return 0;
}
