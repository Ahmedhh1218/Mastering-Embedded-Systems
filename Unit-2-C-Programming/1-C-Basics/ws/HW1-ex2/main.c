/*
 * main.c
 *
 *  Created on: Aug 27, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	unsigned int x;
	printf("Enter an Integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d/r/n", &x);
	printf("You entered: %d", x);
	return 0;
}
