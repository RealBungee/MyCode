// Assignment_week_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include "string.h"


void main()
{
	int i;
	int array[] = { 65,116,32,50,48,32,68,101,103,114,101,101,115,44,32,84,104,101,32,87,101,97,116,104,101,114,32,73,115,32,71,114,101,97,116,46 };

	for (i = 0; array[i] != 46; i++) 
		printf("%c", array[i]);
	printf("\n\n");
	for (i = 0; array[i] != 46; i++) {
				if (array[i] >= 97 && array[i] <= 122)
					array[i] = array[i] - 32;
		printf("%c", array[i]);}
	printf("\n\n");
	for (i = 0; array[i] != 46; i++) {
				if (array[i] >= 65 && array[i] <= 90)
					array[i] = array[i] + 32;
		printf("%c", array[i]);	}
	printf("\n\n");
}










