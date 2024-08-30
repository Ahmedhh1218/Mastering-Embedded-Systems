/*
 * main.c
 *
 *  Created on: Aug 29, 2024
 *      Author: ahmed
 */


#include <stdio.h>

int calcMin(int values[], int n);

int main()
{
	int arr[10], n;
	printf("Enter number of elements (1-10): ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		printf("enter element no%d: ", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d", &arr[i]);
	}

	printf("Minimum value = %d", calcMin(arr, n));
}

int calcMin(int values[], int n)
{
	int min = values[0];

	for(int i = 0; i < n; i++)
	{
		if(values[i] < min)
		{
			min = values[i];
		}
	}

	return min;
}
