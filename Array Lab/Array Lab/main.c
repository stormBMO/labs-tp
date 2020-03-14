#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"util.h"

void main() {
	int *array, lineLength, lineQuantity, arrLength;
	scanf("%d", &lineLength);
	scanf("%d", &lineQuantity);
	arrLength = lineLength * lineQuantity;
	array = malloc(arrLength*sizeof(int*));
	//for (int i = 0; i < arrLength; ++i)

}