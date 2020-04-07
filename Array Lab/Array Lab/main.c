// DO U NOU DE WAY
// ANDREY CHETVERTKOV IVT-13BO YaSU 
// This program is searching the way from A to B
// The way can`t contain C and D (something like "banned" points)

#include<stdio.h>
#include<stdlib.h>
#include"util.h"
#include"move.h"

int main() {
	cell* array;
	int lineLength, lineQuantity, arrLength; // field props
	int startPosition, finishPosition, firstBan, secondBan; // "points" props
	
	if (!InitProps(&lineLength, &lineQuantity,
		&startPosition, &finishPosition, &firstBan, &secondBan)) {
		return 1;
	}

	if (lineLength < 3 || lineQuantity < 2) // it means, that this field cant be used for this task
		return 1;

	Swap(&startPosition, &finishPosition); // swaps two nums (important for output)

	arrLength = (lineLength + lineQuantity) * lineQuantity;
	if (!(array = malloc(arrLength * sizeof(cell)))) { // allocate memory for our custom field
		return 1;
	}
	
	InitArray(array, lineLength, lineQuantity, firstBan, secondBan); // initializating our field

	int startPositionStr = (startPosition - 1) / lineLength; 
	int startPositionNum = (startPosition - 1) % lineLength;
	startPosition = startPositionStr * (lineLength + lineQuantity) 
		+ startPositionNum + startPositionStr; // counting start positiong in our custom field

	if (CheckSpot(array, startPosition, finishPosition-1, 
		lineLength + lineQuantity, arrLength)) { // launch recuricion staff
			printf("Congrats");
	}
	else {
			printf("There is no way");
	}
	free(array);
	return 1;
}