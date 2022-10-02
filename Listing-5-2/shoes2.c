// shoes2.c -- calculates foot lengths for several sizes

#include <stdio.h>

#define ADJUST 7.64
#define SCALE 0.325

int main() {

	double shoe, foot;

	printf("\nShoe size (men's)    foot length\n");
	shoe = 3.0;

	while (shoe < 18.5) { // start of while loop and block
		
		foot = SCALE * shoe + ADJUST;
		printf("%10.1f %15.2f inches\n", shoe, foot);
		shoe = shoe + 1.0;
	} // end of block
	printf("If the shoe fits, wear it.\n");
	
	printf("\n");
	return 0;
}
