/*
 ============================================================================
 Name        : algorithmC.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "General.h"


int main(void) {

	int arr[] = {9,8,7,6,5,4,3,2,1};
	heapSort(arr,9);
	int i ;
	for(i=0;i<9;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
