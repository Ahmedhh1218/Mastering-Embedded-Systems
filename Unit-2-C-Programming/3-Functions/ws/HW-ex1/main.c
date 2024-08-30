/*
 * main.c
 *
 *  Created on: Aug 30, 2024
 *      Author: ahmed
 */


#include <stdio.h>

void primePrint(int a, int b);

int main()
{
	int a, b;
	printf("Enter two numbers(intervals): ");
	fflush(stdout); fflush(stdin);
	scanf("%d %d", &a, &b);

	primePrint(a, b);
}

void primePrint(int a, int b)
{
	int prime = 1;
	printf("Prime numbers between %d and %d are: ", a, b);
	for(int i = a+1; i < b; i++)
	{
		if(i <= 1)
		{
			prime = 0;
		}
		else if(i == 2 || i == 3)
		{
			prime = 1;
		}
		for(int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				prime = 0;
				break;
			}
			else
				prime = 1;
		}
		if (prime == 1)
			printf("%d ",i);
	}
}
