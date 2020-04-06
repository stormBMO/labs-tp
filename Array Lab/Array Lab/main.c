#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"util.h"
#include"move.h"

void main() {
	int* array;
	int lineLength, lineQuantity, arrLength;
	int startPosition, finishPosition, firstBan, secondBan;


	//printf("Line Length\n");
	//if (!scanf("%d", &lineLength))
	//	return;
	//printf("Line Quantity\n");
	//if (!scanf("%d", &lineQuantity))
	//	return;
	//printf("Start Position:\n");			//TODO: Check if this posotion is possible
	//if (!scanf("%d", &startPosition))
	//	return;
	//printf("Last Position:\n");
	//if (!scanf("%d", &finishPosition))  //TODO: Check if this posotion is possible
	//	return;
	//printf("First Ban:\n");
	//if (!scanf("%d", &firstBan))		//TODO: Check if this posotion is possible
	//	return;
	//printf("Second Ban:\n");
	//if (!scanf("%d", &secondBan))		//TODO: Check if this posotion is possible
	//	return;

	lineLength = 3;
	lineQuantity = 3;
	startPosition = 1;
	finishPosition = 3;
	firstBan = 2;
	secondBan = 4;

	arrLength = lineLength * lineQuantity - 1;
	array = (int*)calloc(arrLength, sizeof(int));
	array[firstBan] = 1;
	array[secondBan] = 1;
	if (CheckSpot(array, startPosition, finishPosition, lineLength, arrLength)) {
		printf("\narray\n");
		for (int i = 0; i < arrLength; printf("%d ", array[i]), ++i);
		PositiveEnd(array, arrLength);
	}
	else
		NegativeEnd();
	//free(array);
}