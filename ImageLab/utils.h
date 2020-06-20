#pragma once

#include <vector>

using namespace std;

//Initializating image`s matrix
//Takes a matrix as an argument (vector<vector<int>>)
bool MatrixInput(vector<vector<pair<int, int>>>& matrix);   

//Output matrix
//Takes a matrix as an argument (vector<vector<int>>)
int MatrixOutput(const vector<vector<pair<int, int>>>& matrix);

//Input for this specify task
//Takes 3 int as an argument
bool InputData(int& iIndex, int& jIndex, int& color);