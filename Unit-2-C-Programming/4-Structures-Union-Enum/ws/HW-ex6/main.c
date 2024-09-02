/*
 * main.c
 *
 *  Created on: Sep 3, 2024
 *      Author: ahmed
 */


#include <stdio.h>

union job {
    char name[32];
    float salary;
    int worker_no;
}u;

struct job1 {
    char name[32];
    float salary;
    int worker_no;
}s;

int main(){
    printf("size of union = %d\n", sizeof(u));
    printf("size of structure = %d", sizeof(s));
    return 0;
}


//Explanation and Expected Output:
//Union: A union in C stores different data types
//		in the same memory location. In this case,
//		the largest member is the name[32], which is
//		an array of 32 characters.
//		so the union will have a size of 32 bytes.
//
//Structure: A structure, on the other hand,
//		allocates memory for all its members
//		individually.
//		Plus any padding that might be added by the
//		compiler for alignment.
//
//char name[32]: 32 bytes
//float salary: 4 bytes
//int worker_no: 4 bytes
//Total size: 40 bytes
