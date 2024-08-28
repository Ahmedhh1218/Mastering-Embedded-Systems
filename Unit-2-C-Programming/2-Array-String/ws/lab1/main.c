/*
 * main.c
 *
 *  Created on: Aug 28, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	float arr[10];

	for(int i = 0; i < 10; i++)
	{
		printf("Enter student %d degree: ", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &arr[i]);
	}

	for(int i = 0; i < 10; i++)
	{
		printf("Student %d degree is %f\n", i+1, arr[i]);
	}
}
