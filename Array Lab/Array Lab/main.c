#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	int lineLength, lineQuantity = -1;
	if (!(scanf("%d", &lineLength))) 
		return;
	if (!(scanf("%d", &lineQuantity)))
		return;
	for (int i = 0; i < lineLength; ++i) {
		for (int j = 0; j < i % lineLength + 1; ++j) {
			printf("%d, ", i+1+j*(lineQuantity+1));
		}
	}
	//printf("%d - %d", lineLength, lineQuantity);
}