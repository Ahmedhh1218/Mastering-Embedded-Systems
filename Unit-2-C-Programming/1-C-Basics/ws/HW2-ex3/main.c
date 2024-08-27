/*
 * main.c
 *
 *  Created on: Aug 27, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	float a, b, c, largest;
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &a, &b, &c);

	largest = (a > b) ? a : ((b > c) ? b : c);

	printf("Largest number = %f", largest);
}
