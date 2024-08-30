/*
 * main.c
 *
 *  Created on: Aug 30, 2024
 *      Author: ahmed
 */


#include <stdio.h>

int power(int base, int exp);

int main() {
	int base, exp;

	printf("Enter base: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &base);

	printf("Enter exponent: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &exp);

	printf("%d^%d = %d", base, exp, power(base, exp));

	return 0;
}

int power(int base, int exp)
{
	if(exp == 0)
		return 1;
	else
		return base * power(base, exp -1);
}
