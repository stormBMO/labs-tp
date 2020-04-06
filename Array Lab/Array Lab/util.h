#ifndef UTIL_H
#define UTIL_H

enum {
	unused,
	used
};

struct cell {
	int idx;
	int color;
};

typedef struct cell cell;


void PositiveEnd(int array[], int arrLength);
void NegativeEnd(int array[]);
void InitArray(cell* array, int lineLength, int lineQuantity, int firstBan, int secondBan);
void Swap(int* a, int* b);

#endif //UTIL_H