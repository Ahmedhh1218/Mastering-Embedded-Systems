/*
 * main.c
 *
 *  Created on: Aug 27, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	unsigned int n, sum = 0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}

	printf("Sum = %d", sum);
}
