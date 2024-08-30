/*
 * main.c
 *
 *  Created on: Aug 30, 2024
 *      Author: ahmed
 */


#include <stdio.h>

int factorial(int n);

int main()
{
	int n;
	printf("Enter a positive integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &n);

	printf("Factorial of %d = %d", n, factorial(n));
}

int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n-1);
}
