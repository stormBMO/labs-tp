//DO U NOU DE WAY
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"util.h"
#include"move.h"


void main() {
	cell* array;
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

	lineLength = 5;
	lineQuantity = 2;
	startPosition = 1;
	finishPosition = 7;
	firstBan = 13;
	secondBan = 15;

	if (lineLength < 3)
		return;

	Swap(&startPosition, &finishPosition);

	arrLength = (lineLength + lineQuantity) * lineQuantity;
	if (!(array = malloc(arrLength * sizeof(cell)))) {
		return;
	}
	
	InitArray(array, lineLength, lineQuantity, firstBan, secondBan);


	int startPositionStr = (startPosition - 1) / lineLength;
	int startPositionNum = (startPosition - 1) % lineLength;
	startPosition = startPositionStr * (lineLength + lineQuantity) 
		+ startPositionNum + startPositionStr;
	//for (int i = 0; i < arrLength; printf("%d ", array[i].idx), ++i);
	if (CheckSpot(array, startPosition, finishPosition-1, lineLength + lineQuantity,
		arrLength)) {
		printf("Congrats");
	}
	else {
		printf("There is no way");
	}
	free(array);
}