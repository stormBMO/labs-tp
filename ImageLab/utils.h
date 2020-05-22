#pragma once

#include <vector>

using namespace std;

//Initializating image`s matrix
//Takes a matrix as an argument (vector<vector<int>>)
int MatrixInput(vector<vector<int>>& matrix);   

//Output matrix
//Takes a matrix as an argument (vector<vector<int>>)
int MatrixOutput(const vector<vector<int>>& matrix);


int InputData(int& iIndex, int& jIndex, int& color);