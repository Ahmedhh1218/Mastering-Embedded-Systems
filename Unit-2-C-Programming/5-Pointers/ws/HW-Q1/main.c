/*
 * main.c
 *
 *  Created on: Sep 14, 2024
 *      Author: ahmed
 */


#include <stdio.h>

void main()
{
	int m = 29;
	int* ab;

	printf("Address of m: 0x%x \n", &m);
	printf("Value of m: %d \r\n", m);

	ab = &m;
	printf("Now ab is assigned with the address of m\n");
	printf("Address of pointer ab: 0x%x \n", ab);
	printf("Content of pointer ab: %d \r\n", *ab);

	m = 34;
	printf("m is assigned to 34\n");
	printf("Address of pointer ab: 0x%x \n", ab);
	printf("Content of pointer ab: %d \r\n", *ab);

	*ab = 7;
	printf("pointer ab is assigned to 7\n");
	printf("Address of m: 0x%x \n", &m);
	printf("Value of m: %d \r\n", m);
}
