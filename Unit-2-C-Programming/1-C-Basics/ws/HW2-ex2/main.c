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
	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &input);

	if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' ||
	    input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U')
	{
		printf("%c is a vowel.", input);
	}
	else
	{
		printf("%c is a consonant.", input);
	}
}
