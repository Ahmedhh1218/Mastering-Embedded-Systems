/*
 * main.c
 *
 *  Created on: Sep 3, 2024
 *      Author: ahmed
 */


#include <stdio.h>

struct SStudent
{
	float marks;
	char name[10];
} gData[10];

void main()
{
	printf("Enter information of students:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("For roll number %d\n", i+1);

		printf("Enter name: ");
		fflush(stdin); fflush(stdout);
		scanf("%s", &gData[i].name);

		printf("Enter marks: ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &gData[i].marks);
	}

	printf("Displaying information of students\n");

	for (int i = 0; i < 10; i++)
	{
		printf("Information for roll number %d\n", i+1);

		printf("Name: %s\n", gData[i].name);

		printf("Marks: %f\n", gData[i].marks);
	}
}
