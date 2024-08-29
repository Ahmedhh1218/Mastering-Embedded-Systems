/*
 * main.c
 *
 *  Created on: Aug 29, 2024
 *      Author: ahmed
 */


#include <stdio.h>

int main() {
	int arr[100], n, search, i, pos = -1;

	printf("Enter no of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	printf("Enter the elements:\n");
	fflush(stdin); fflush(stdout);
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Enter the element to be searched: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &search);

	for(i = 0; i < n; i++) {
		if(arr[i] == search) {
			pos = i + 1;
			break;
		}
	}

	if(pos != -1) {
		printf("Number found at the location = %d\n", pos);
	} else {
		printf("Number not found in the array\n");
	}

	return 0;
}
