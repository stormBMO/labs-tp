#include<stdio.h>
#include"util.h"

// Initialization our massive
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

void Swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}
