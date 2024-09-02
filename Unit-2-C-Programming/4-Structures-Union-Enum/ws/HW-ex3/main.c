/*
 * main.c
 *
 *  Created on: Sep 3, 2024
 *      Author: ahmed
 */


#include <stdio.h>

struct SComplex
{
	double m_Real;
	double m_Imaginary;
};

struct SComplex ReadComplex(char name[])
{
	struct SComplex C;
	printf("Enter %s Complex Value (Ex: 5, -3):", name);
	fflush(stdin); fflush(stdout);
	scanf("%lf, %lf", &C.m_Real, &C.m_Imaginary);
	return C;
}

void PrintComplex(char name[], struct SComplex C)
{
	printf("%s = (%lf) + j (%lf)\r\n", name, C.m_Real, C.m_Imaginary);
}

struct SComplex AddComplex(struct SComplex A, struct SComplex B)
{
	struct SComplex C;
	C.m_Real = A.m_Real + B.m_Real;
	C.m_Imaginary = A.m_Imaginary + B.m_Imaginary;
	return C;
}

void main()
{
	struct SComplex X, Y, Z;

	printf("For 1st complex number\n");
	X = ReadComplex("1st");
	printf("For 2nd complex number\n");
	Y = ReadComplex("2nd");
	Z = AddComplex(X, Y);
	PrintComplex("Sum", Z);
}
