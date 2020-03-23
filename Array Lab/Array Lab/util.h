#ifndef UTIL_H
#define UTIL_H

int CheckSpot(int* array, int start, int finish, int lineLenght, int arrLength);
int StepRU(int position, int lenght);
int StepRD(int position, int lenght);
int StepDR(int position, int lenght);
int StepDL(int position, int lenght);
int StepLU(int position, int lenght);
int StepLD(int position, int lenght);
int StepUR(int position, int lenght);
int StepUL(int position, int lenght);
void PositiveEnd(int* array, int arrLength);
void NegativeEnd();

#endif