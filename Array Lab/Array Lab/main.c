// DO U NOU DE WAY
// ANDREY CHETVERTKOV IVT-13BO YaSU 
// This program is searching the way from A to B
// The way can`t contain C and D (something like "banned" points)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"util.h"
#include"move.h"


void main() {
	cell* array;
	int lineLength, lineQuantity, arrLength; // field props
	int startPosition, finishPosition, firstBan, secondBan; // "points" props


	printf("Line Length\n"); // initializating props
	if (!scanf("%d", &lineLength))
		return;
	printf("Line Quantity\n");
	if (!scanf("%d", &lineQuantity))
		return;
	printf("Start Position:\n");			
	if (!scanf("%d", &startPosition))
		return;
	printf("Last Position:\n");
	if (!scanf("%d", &finishPosition))  
		return;
	printf("First Ban:\n");
	if (!scanf("%d", &firstBan))		
		return;
	printf("Second Ban:\n");
	if (!scanf("%d", &secondBan))		
		return;

	if (lineLength < 3 || lineQuantity < 2) // it means, that this field cant be used for this task
		return;

	Swap(&startPosition, &finishPosition); // swaps to nums (important for output)

	arrLength = (lineLength + lineQuantity) * lineQuantity;
	if (!(array = malloc(arrLength * sizeof(cell)))) { // allocate memory for our custom field
		return;
	}
	
	InitArray(array, lineLength, lineQuantity, firstBan, secondBan); // initializating our field


	int startPositionStr = (startPosition - 1) / lineLength; 
	int startPositionNum = (startPosition - 1) % lineLength;
	startPosition = startPositionStr * (lineLength + lineQuantity) 
		+ startPositionNum + startPositionStr; // counting start positiong in our custom field

	if (CheckSpot(array, startPosition, finishPosition-1, lineLength + lineQuantity,
		arrLength)) { // launch recuricion staff
		printf("Congrats");
	}
	else {
		printf("There is no way");
	}
	free(array);
}