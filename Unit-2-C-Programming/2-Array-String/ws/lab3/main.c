/*
 * main.c
 *
 *  Created on: Aug 28, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	float arr[3][3];
	float t[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Enter the item(%d, %d): ", i, j);
			fflush(stdin); fflush(stdout);
			scanf("%f", &arr[i][j]);
		}
	}

	printf("the matrix is\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%2.2f\t", arr[i][j]);
		}
		printf("\r\n");
	}

	printf("the transpose matrix is\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			t[i][j] = arr[j][i];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%2.2f\t", t[i][j]);
		}
		printf("\r\n");
	}
}
