/*
 * main.c
 *
 *  Created on: Aug 28, 2024
 *      Author: ahmed
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int arr[1000];
	int i, count = 0;

	for (i = 0; i < 1000; i++)
	{
		arr[i] = (rand() % 1000) + 1;
	}

	for (i = 1; i < 1000; i++)
	{
		if ( (arr[i-1] < arr[i]) && (arr[i+1] < arr[i]) )
		{
			count++;
		}
	}

	printf("Count = %d", count);
}
