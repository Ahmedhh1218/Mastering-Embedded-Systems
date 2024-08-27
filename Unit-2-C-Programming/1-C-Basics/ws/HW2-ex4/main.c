/*
 * main.c
 *
 *  Created on: Aug 27, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	float x;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &x);

	if (x > 0)
	{
		printf("%f is positive", x);
	}
	else if (x < 0)
	{
		printf("%f is negative", x);
	}
	else
	{
		printf("You entered zero");
	}
}
