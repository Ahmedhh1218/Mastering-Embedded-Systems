/*
 * main.c
 *
 *  Created on: Aug 26, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	int a, b, minimum;
	printf("Enter Two Numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%d %d", &a, &b);

	minimum = (a<b) ? a : b;

	printf("Minimum = %d", minimum);
}
