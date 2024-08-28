/*
 * main.c
 *
 *  Created on: Aug 28, 2024
 *      Author: ahmed
 */


#include <stdio.h>

int main()
{
	float x[] = {5 , 16, 22, 3.5, 15};
	float y;

	for (int i = 0; i < 5; i++)
	{
		y = 5 * x[i] * x[i] + 3 * x[i] + 2;
		printf("y(%f) = %f\n", x[i], y);
	}
}
