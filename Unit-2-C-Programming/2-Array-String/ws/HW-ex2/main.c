/*
 * main.c
 *
 *  Created on: Aug 29, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	int n, i;
	float arr[100], sum = 0, average = 0;

	printf("Enter the number of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	while (n > 100 || n <= 0)
	{
		printf("Invalid input! Number should be in the range (1-100)\n");
		printf("Please enter number again...\n");
		fflush(stdin); fflush(stdout);
		scanf("%d", &n);
	}

	for (i = 0; i < n; i++)
	{
		printf("%d. Enter number: ", i);
		fflush(stdout); fflush(stdin);
		scanf("%f", &arr[i]);
		sum += arr[i];
	}
	average = sum / n;
	printf("Average = %.2f", average);
}
