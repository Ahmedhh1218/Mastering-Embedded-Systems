/*
 * main.c
 *
 *  Created on: Aug 27, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	int num;
	printf("Enter an integer you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("%d is even.", num);
	}
	else
	{
		printf("%d is odd.", num);
	}
}
