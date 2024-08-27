/*
 * main.c
 *
 *  Created on: Aug 27, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	//float a, b;
	int a, b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
//	scanf("%f", &a);
	scanf("%d", &a);

	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
//	scanf("%f", &b);
	scanf("%d", &b);

//	a = a + b;
//	b = a - b;
//	a = a - b;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

//	printf("After swapping, value of a = %f\r\n", a);
//	printf("After swapping, value of b = %f", b);
	printf("After swapping, value of a = %d\r\n", a);
	printf("After swapping, value of b = %d", b);
}
