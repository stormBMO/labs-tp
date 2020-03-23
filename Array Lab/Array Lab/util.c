#include<stdio.h>

int CheckSpot(int* array, int start, int finish, int lineLenght, int arrLength) {
	if (start == finish) {
		array[start] = 2;
		return 1;
	}
	if (start > arrLength)
		return 0;
	if (array[start] == 1)
		return 0;
	array[start] = 1;
	if (StepRU(start, lineLenght) > 0)
		if (CheckSpot(array, StepRU(start, lineLenght), finish, lineLenght, arrLength)) {
			array[start] = 2;
			return 1;
		}
	if (StepRD(start, lineLenght) > 0)
		if(CheckSpot(array, StepRD(start, lineLenght), finish, lineLenght, arrLength)){
			array[start] = 2;
			return 1;
		}
	if (StepDR(start, lineLenght) > 0)
		if (CheckSpot(array, StepDR(start, lineLenght), finish, lineLenght, arrLength)) {
			array[start] = 2;
			return 1;
		}
	if (StepDL(start, lineLenght) > 0)
		if (CheckSpot(array, StepDL(start, lineLenght), finish, lineLenght, arrLength)) {
			array[start] = 2;
			return 1;
		}
	if (StepLD(start, lineLenght) > 0)
		if (CheckSpot(array, StepLD(start, lineLenght), finish, lineLenght, arrLength)) {
			array[start] = 2;
			return 1;
		}
	if (StepLU(start, lineLenght) > 0)
		if (CheckSpot(array, StepLU(start, lineLenght), finish, lineLenght, arrLength)) {
			array[start] = 2;
			return 1;
		}
	if (StepUR(start, lineLenght) > 0)
		if (CheckSpot(array, StepUR(start, lineLenght), finish, lineLenght, arrLength)) {
			array[start] = 2;
			return 1;
		}
	if (StepUL(start, lineLenght) > 0)
		if (CheckSpot(array, StepUL(start, lineLenght), finish, lineLenght, arrLength)) {
			array[start] = 2;
			return 1;
		}
}

int StepRU(int position, int lenght) {
	return position + 3 - lenght;
}

int StepRD(int position, int lenght) {
	return position + 1 + lenght;
}

int StepDR(int position, int lenght) {
	return position - 1 + 2 * lenght;
}

int StepDL(int position, int lenght) {
	return position - 3 + 2 * lenght;
}

int StepLU(int position, int lenght) {
	return position - 1 - lenght;
}
int StepLD(int position, int lenght) {
	return position + 3 - lenght;
}

int StepUR(int position, int lenght) {
	return position + 3 - 2 * lenght;
}

int StepUL(int position, int lenght) {
	return position - 2 * lenght;
}

void PositiveEnd(int* array, int arrLength) {
	for (int i = 0; i < arrLength; ++i)
		if (array[i] == 2)
			printf("%d ", i + 1);
}

void NegativeEnd() {
	printf("WHOOOOPSIe");
}