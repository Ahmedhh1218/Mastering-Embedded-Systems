/*
 * main.c
 *
 *  Created on: Sep 3, 2024
 *      Author: ahmed
 */


#include <stdio.h>

struct SStudent
{
	unsigned int roll;
	float marks;
	char name[10];
} gData;

void main()
{
	printf("Enter information of students:\n");
	printf("Enter name: ");
	fflush(stdin); fflush(stdout);
	scanf("%s", &gData.name);

	printf("Enter roll number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &gData.roll);

	printf("Enter marks: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &gData.marks);

	printf("Displaying Information\nName: %s\nRoll: %d\nMarks: %f\n", gData.name, gData.roll, gData.marks);
}
