#include<stdio.h>
#include"util.h"

void InitArray(cell* array, int lineLength, int lineQuantity, int firstBan, int secondBan) {
	int k = 1, cur;
	for(int i = 0; i < lineQuantity; ++i)
		for (int j = 0; j < lineLength + lineQuantity; ++j) {
			cur = i * (lineLength + lineQuantity) + j;
			printf("%d ", cur);
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
	printf("\n\n\n");
}

void Swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}
