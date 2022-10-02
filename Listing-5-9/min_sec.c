// min_sec.c -- converts seconds to minutes and seconds

#include <stdio.h>

#define SEC_PER_MIN 60	// seconds in a minute

int main() {

	int sec, min, left;

	printf("\nConvert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds (<=0 to quit):\n");
	scanf("%d", &sec);

	while (sec > 0) {
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;

		printf("%d seconds is %d minutes, %d seconds.\n", 
			sec, min, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf("%d", &sec);
	}
	printf("Done!\n");

	printf("\n");
	return 0;
}
