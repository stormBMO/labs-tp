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

// Initialization our massive
void InitArray(cell* array, int lineLength, int lineQuantity, int firstBan, int secondBan);
// Initializating props
int InitProps(int* lineLength, int* lineQuantity,
	int* startPosition, int* finishPosition, int* firstBan, int* secondBan);
// Swaps two integers
void Swap(int* a, int* b);

#endif //UTIL_H