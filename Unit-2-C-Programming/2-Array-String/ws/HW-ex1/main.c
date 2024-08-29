/*
 * main.c
 *
 *  Created on: Aug 29, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	float mat1[2][2], mat2[2][2], sum[2][2];

	printf("Enter the elements of 1st matrix\n");
	fflush(stdout); fflush(stdin);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdout); fflush(stdin);
			scanf("%f", &mat1[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix\n");
	fflush(stdout); fflush(stdin);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("Enter b%d%d: ", i+1, j+1);
			fflush(stdout); fflush(stdin);
			scanf("%f", &mat2[i][j]);
		}
	}

	printf("Sum of matrix\n");
	fflush(stdout); fflush(stdin);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sum[i][j] = mat1[i][j] + mat2[i][j];
			printf("%2.2f\t", sum[i][j]);
		}
		printf("\n");
	}
}
