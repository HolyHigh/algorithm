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

	char buf[100] = "123456789";
	myMemcpy(buf+2, buf, 5);
	//Memcpy(buf, buf+2, 5);
	printf("%s\n", buf);
	return 0;
}
