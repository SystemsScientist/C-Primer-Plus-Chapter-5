// neg_pos_operands.c -- utilizes negative and positive operands, 
// see Pg. 144 of text for file idea

#include <stdio.h>

int main() {

	printf("\n11 /  5 is %d, and  11 %  5 is %d \n", 11 / 5, 11 % 5);
	printf(" 11 / -5 is %d, and  11 % -5 is %d \n", 11 / -5, 11 % -5);
	printf("-11 / -5 is %d, and -11 % -5 is %d \n", -11 / -5, -11 % -5);
	printf("-11 /  5 is %d, and -11 %  5 is %d \n", -11 / 5, -11 % 5);

	printf("\n");
	return 0;
}
