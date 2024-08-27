/*
 * main.c
 *
 *  Created on: Aug 27, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	char input;
	printf("Enter a Character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &input);

	printf("ASCII value of %c = %d", input, input);
}
