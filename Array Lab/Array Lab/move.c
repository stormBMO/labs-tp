#include<stdio.h>
#include "util.h"

// Returns 0 when results are bad and 1, if they are good
// After that recursion goes from finish to start and print the way
// This function gets:
// 1. cell* array - Cell`s array (for manipulating with this)
// 2. start - Current/start position of our way
// 3. finish - Finish position of our way
// 4. fullLineLength - Whole length (with every -1 etc.) of our massive`s line
// 5. arrLength - Whole length of our massive
int CheckSpot(cell* array, int start, int finish, int fullLineLenght, int arrLength) {
	if (start >= arrLength) // this is bad condition for us, because this cell isn`t in massive
		return 0;
	if (start < 0) // it means, that we are not it the massive
		return 0;
	if (array[start].color == used) // it means, that we were in this cell
		return 0;
	if (start == finish) { // we`ve found finish, so we need to print it and go out from recursion
		printf("%d ", array[start].idx);
		array[start].color = used;
		return 1;
	}
	array[start].color = used;
	// doing the same thing with other props
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



// return position after Step Right Up
int StepRU(int position, int lenght) { 
	return position + 2 - lenght;
}
// return position after Step Right Down
int StepRD(int position, int lenght) { 
	return position + 2 + lenght;
}
// return position after Step Down Right
int StepDR(int position, int lenght) {
	return position + 1 + 2 * lenght;
}
// return position after Step Down Left
int StepDL(int position, int lenght) { 
	return position - 1 + 2 * lenght;
}
// return position after Step Left Up
int StepLU(int position, int lenght) {
	return position - 2 - lenght;
}
// return position after Step Right Up
int StepLD(int position, int lenght) {
	return position + 2 + lenght;
}
// return position after Step Up Right
int StepUR(int position, int lenght) { 
	return position + 1 - 2 * lenght;
}
// return position after Step Up Left
int StepUL(int position, int lenght) { 
	return position - 1 - 2 * lenght;
}