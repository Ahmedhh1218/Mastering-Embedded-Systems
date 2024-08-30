/*
 * main.c
 *
 *  Created on: Aug 29, 2024
 *      Author: ahmed
 */


#include <stdio.h>

unsigned int factorial(unsigned int x);

int main()
{
	unsigned int n, result;

	printf("Enter a number to get its factorial: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	result = factorial(n);
	printf("Factorial of %d = %d", n, result);
}

unsigned int factorial(unsigned int x)
{
	unsigned int result = 1;
	if (x < 0)
	{
		return 0;
	}
	else
	{
		while (x > 0)
		{
			result *= x;
			x--;
		}
		return result;
	}
}
