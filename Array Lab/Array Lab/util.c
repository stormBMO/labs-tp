#include<stdio.h>

void PositiveEnd(int* array, int arrLength) {
	printf("\n");
	for (int i = 0; i < arrLength; ++i)
		if (array[i] == 2)
			printf("%d ", i);
}

void NegativeEnd(int *array) {
	printf("WHOOOOPSIe");
}