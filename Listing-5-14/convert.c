// convert.c -- utilizes automatic type conversion

#include <stdio.h>

int main() {

	char ch;
	int i;
	float fl;

	fl = i = ch = 'C';
	printf("\nch = %c, i = %d, fl = %2.2f\n", ch, i, fl);

	ch = ch + 1;	   // ch = 67 + 1
	i = fl + 2 * ch;   // i = 67 + 2 * 68
	fl = 2.0 * ch + i; // fl = 2.0 * 68 + 203
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);

	ch = 5212205.17;   // is too large, will return a warning
	printf("Now ch = %c\n", ch); // produces no output

	printf("\n");
	return 0;
}
