/*
 * main.c
 *
 *  Created on: Aug 29, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	int row, col;
	float a[10][10], b[10][10];

	printf("Enter rows and columns of matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &row, &col);

	while (row < 2 || col < 2 || row > 10 || col > 10)
	{
		printf("Invalid input! rows and cols should be in the range (2-10)\n");
		printf("Please enter again...\n");
		fflush(stdin); fflush(stdout);
		scanf("%d %d", &row, &col);
	}

	printf("Enter elements of matrix:\n");
	fflush(stdout); fflush(stdout);

	for(int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("Enter element a%d%d: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &a[i][j]);
		}
	}

	for(int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			b[j][i] = a[i][j];
		}
	}

	printf("Entered matrix:\n");
	for(int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%f\t", a[i][j]);
		}
		printf("\n");
	}

	printf("Transpose of matrix:\n");
	for(int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%f\t", b[i][j]);
		}
		printf("\n");
	}
}
