/*
 * main.c
 *
 *  Created on: Aug 29, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main() {
	int arr[100], n, element, pos;

	printf("Enter no of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	printf("Enter the elements:\n");
	fflush(stdin); fflush(stdout);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Enter the element to be inserted: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &element);

	printf("Enter the location: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &pos);

	for(int i = n; i >= pos; i--) {
		arr[i] = arr[i-1];
	}

	arr[pos - 1] = element;

	n++;

	printf("Updated array:\n");
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

