int CheckSpot(int* array, int start, int finish, int lineLenght, int arrLength) {
	if (start <= 0)
		return 0;
	if (array[start] == 1)
		return 0;
	if (start > arrLength)
		return 0;
	if (start == finish) {
		array[start] = 2;
		return 1;
	}
	array[start] = 1;
	if (CheckSpot(array, StepRU(start, lineLenght), finish, lineLenght, arrLength) ||
		CheckSpot(array, StepRD(start, lineLenght), finish, lineLenght, arrLength) ||
		CheckSpot(array, StepDR(start, lineLenght), finish, lineLenght, arrLength) ||
		CheckSpot(array, StepDL(start, lineLenght), finish, lineLenght, arrLength) ||
		CheckSpot(array, StepLD(start, lineLenght), finish, lineLenght, arrLength) ||
		CheckSpot(array, StepLU(start, lineLenght), finish, lineLenght, arrLength) ||
		CheckSpot(array, StepUR(start, lineLenght), finish, lineLenght, arrLength) ||
		CheckSpot(array, StepUL(start, lineLenght), finish, lineLenght, arrLength)) {
			printf("step true: %d\n", start);
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
	return position + 1 - 2 * lenght;
}