/*
 * main.c
 *
 *  Created on: Aug 27, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	char c;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);

	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		printf("%c is an alphabet", c);
	}
	else
	{
		printf("%c is not an alphabet", c);
	}
}
