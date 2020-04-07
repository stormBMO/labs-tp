#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"util.h"

// Initialization our custom massive (field)
// This function gets:
// 1. cell* array - Cell`s array (for Initializating it)
// 2. lineLength - User`s length of single line 
// 3. lineQuantity - User`s quantity of single lines
// 4. firstBan - First cell, that we can`t use in the way
// 5. secondBan - Second cell, that we can`t use in the way
void InitArray(cell* array, int lineLength, int lineQuantity, int firstBan, int secondBan) { 
	int k = 1, cur;
	for(int i = 0; i < lineQuantity; ++i)
		for (int j = 0; j < lineLength + lineQuantity; ++j) {
			cur = i * (lineLength + lineQuantity) + j;
			if (j < i || j >= i + lineLength) {
				array[cur].idx = -1;
				array[cur].color = used;
			}
			else {
				array[cur].idx = k++;
				array[cur].color = unused;
			}
			if (array[cur].idx == firstBan ||
				array[cur].idx == secondBan) {
				array[cur].color = used;
			}
		}
}


// Initializating props
int InitProps(int* lineLength, int* lineQuantity, 
	int* startPosition, int* finishPosition, int* firstBan, int* secondBan) {
		printf("Line Length\n");
		if (!scanf("%d", lineLength))
			return 0;
		printf("Line Quantity\n");
		if (!scanf("%d", lineQuantity))
			return 0;
		printf("Start Position:\n");
		if (!scanf("%d", startPosition))
			return 0;
		printf("Last Position:\n");
		if (!scanf("%d", finishPosition))
			return 0;
		printf("First Ban:\n");
		if (!scanf("%d", firstBan))
			return 0;
		printf("Second Ban:\n");
		if (!scanf("%d", secondBan))
			return 0;
		return 1;
}

// Swaps two integers
void Swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}
