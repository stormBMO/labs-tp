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

void InitArray(cell* array, int lineLength, int lineQuantity, int firstBan, int secondBan);
void Swap(int* a, int* b);

#endif //UTIL_H