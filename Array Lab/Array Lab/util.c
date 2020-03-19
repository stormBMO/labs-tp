#include<stdio.h>

int step(int lineLength, 
	int currentPos, int firstBan, int secondBan, int finalPos, int arrLen, int previousPos) {
	printf("%d - %d\n", currentPos, previousPos);
	if (currentPos + 3 - lineLength > 0 && currentPos + 3 - lineLength < arrLen 
		&& previousPos != currentPos + 3 - lineLength)
		if(step(lineLength, currentPos + 3 - lineLength, firstBan, secondBan, finalPos, arrLen, currentPos))
			printf("cool1");
	if (currentPos + 1 + lineLength > 0 && currentPos + 1 + lineLength < arrLen
		&& previousPos != currentPos + 1 + lineLength)
		if(step(lineLength, currentPos + 1 + lineLength, firstBan, secondBan, finalPos, arrLen, currentPos))
			printf("cool2");
	if (currentPos + 3 - 2 * lineLength > 0 && currentPos + 3 - 2 * lineLength< arrLen
		&& previousPos != currentPos + 3 - 2 * lineLength)
		if(step(lineLength, currentPos + 3 - 2 * lineLength, firstBan, secondBan, finalPos, arrLen, currentPos))
			printf("cool3");
	if (currentPos - 2 * lineLength > 0 && currentPos - 2 * lineLength < arrLen
		&& previousPos != currentPos - 2 * lineLength)
		if(step(lineLength, currentPos - 2 * lineLength, firstBan, secondBan, finalPos, arrLen, currentPos))
			printf("cool4");
	
	if (currentPos - 1 - lineLength > 0 && currentPos - 1 - lineLength < arrLen
		&& previousPos != currentPos - 1 - lineLength)
		if(step(lineLength, currentPos - 1 - lineLength, firstBan, secondBan, finalPos, arrLen, currentPos))
			printf("cool5");
	if (currentPos - 3 + lineLength > 0 && currentPos - 3 + lineLength < arrLen
		&& previousPos != currentPos - 3 + lineLength)
		if(step(lineLength, currentPos - 3 + lineLength, firstBan, secondBan, finalPos, arrLen, currentPos))
			printf("cool6");
	if (currentPos - 1 + 2 * lineLength > 0 && currentPos - 1 + 2 * lineLength < arrLen
		&& previousPos != currentPos - 1 + 2 * lineLength)
		if(step(lineLength, currentPos - 1 + 2 * lineLength, firstBan, secondBan, finalPos, arrLen, currentPos))
			printf("cool7");
	if (currentPos - 3 + 2 * lineLength > 0 && currentPos - 3 + 2 * lineLength < arrLen
		&& previousPos != currentPos - 3 + 2 * lineLength)
		if (step(lineLength, currentPos - 3 + 2 * lineLength, firstBan, secondBan, finalPos, arrLen, currentPos))
			printf("cool8");
	if (currentPos == finalPos)
		return 1;
}