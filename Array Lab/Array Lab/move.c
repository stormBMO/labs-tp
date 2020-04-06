#include<stdio.h>
#include "util.h"

int CheckSpot(cell* array, int start, int finish, int fullLineLenght, int arrLength) {
	if (start >= arrLength)
		return 0;
	if (start < 0)
		return 0;
	if (array[start].color == used)
		return 0;
	if (start == finish) {
		printf("%d ", array[start].idx);
		array[start].color = used;
		return 1;
	}
	array[start].color = used;
	if (CheckSpot(array, StepRU(start, fullLineLenght), finish, fullLineLenght, arrLength) ||
		CheckSpot(array, StepRD(start, fullLineLenght), finish, fullLineLenght, arrLength) ||
		CheckSpot(array, StepDR(start, fullLineLenght), finish, fullLineLenght, arrLength) ||
		CheckSpot(array, StepDL(start, fullLineLenght), finish, fullLineLenght, arrLength) ||
		CheckSpot(array, StepLD(start, fullLineLenght), finish, fullLineLenght, arrLength) ||
		CheckSpot(array, StepLU(start, fullLineLenght), finish, fullLineLenght, arrLength) ||
		CheckSpot(array, StepUR(start, fullLineLenght), finish, fullLineLenght, arrLength) ||
		CheckSpot(array, StepUL(start, fullLineLenght), finish, fullLineLenght, arrLength)) {
			array[start].color = used;
			printf("%d ", array[start].idx);
			return 1;
	}
}




int StepRU(int position, int lenght) {
	return position + 2 - lenght;
}

int StepRD(int position, int lenght) {
	return position + 2 + lenght;
}

int StepDR(int position, int lenght) {
	return position + 1 + 2 * lenght;
}

int StepDL(int position, int lenght) {
	return position - 1 + 2 * lenght;
}

int StepLU(int position, int lenght) {
	return position - 2 - lenght;
}
int StepLD(int position, int lenght) {
	return position + 2 + lenght;
}

int StepUR(int position, int lenght) {
	return position + 1 - 2 * lenght;
}

int StepUL(int position, int lenght) {
	return position - 1 - 2 * lenght;
}