/*
 * main.c
 *
 *  Created on: Aug 27, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	char operator;
	float op1, op2;

	printf("Enter operator either + or - or * or /: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &operator);

	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &op1, &op2);

	switch (operator)
	{
	case '+':
		printf("%f %c %f = %f",op1, operator, op2, op1 + op2);
		break;
	case '-':
		printf("%f %c %f = %f",op1, operator, op2, op1 - op2);
		break;
	case '*':
		printf("%f %c %f = %f",op1, operator, op2, op1 * op2);
		break;
	case '/':
		if(op2 == 0)
		{
			printf("Invalid operation: division by zero!");
		}
		else
		{
			printf("%f %c %f = %f",op1, operator, op2, op1 / op2);
		}
		break;
	}
}
