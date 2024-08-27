/*
 * main.c
 *
 *  Created on: Aug 27, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	int x; long long factorial=1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);

	if (x < 0)
	{
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
	else if (x == 0)
	{
		printf("Factorial = 1");
	}
	else
	{
		for (int i = 2; i <= x; i++)
		{
			factorial *= i;
		}
		printf("Factorial = %lld", factorial);
	}
}
