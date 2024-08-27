/*
 * main.c
 *
 *  Created on: Aug 27, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	int num1, num2, sum;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &num1, &num2);

	sum = num1 + num2;

	printf("Sum: %d", sum);
}
