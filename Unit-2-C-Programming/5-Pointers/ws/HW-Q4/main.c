/*
 * main.c
 *
 *  Created on: Sep 14, 2024
 *      Author: ahmed
 */


#include <stdio.h>

void main()
{
	int arr[15], size, *ptr;

	printf("Input the number of elements to store in the array (max 15): ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &size);
	printf("Input %d number of elements in the array: \n", size);
	fflush(stdout); fflush(stdin);

	ptr = &arr[0];
	for (int i=0; i<size; i++)
	{
		printf("element - %d: ", i+1);
		fflush(stdout); fflush(stdin);
		scanf("%d", ptr);
		ptr++;
	}

	ptr = &arr[size-1];
	for (int i = size; i > 0; i--)
	{
		printf("element - %d: %d\n", i, *ptr);
		ptr--;
	}
}
