#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <set>
#include <map>
#include <algorithm>
#include "utils.h"


using namespace std;

//Initializating image`s matrix
//Takes a matrix as an argument (vector<vector<pair<int, int>>>)
int MatrixInput(vector<vector<int>>& matrix){
    cout << "Enter matrix ([0-255] values only):" << endl;
    for (size_t i = 0; i < matrix.size(); ++i)
        for (size_t j = 0; j < matrix.size(); ++j){
            if(!(cin >> matrix[i][j]))
                return 1;
            if(matrix[i][j] < 0 || matrix[i][j] > 255)
                return 1;
        }
    return 0;
}

//Output matrix
//Takes a matrix as an argument (vector<vector<pair<int, int>>>)
int MatrixOutput(const vector<vector<int>>& matrix){
    cout << matrix.size() << endl;
    for (int i = 0; i < matrix.size(); ++i){
        for (int j = 0; j < matrix.size(); ++j){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

int InputData(int& iIndex, int& jIndex, int& color){
    cout << "Enter i:" << endl;
    if(!(cin >> iIndex))
        return 1;
    cout << "Enter j:" << endl;
    if(!(cin >> jIndex))
        return 1;
    cout << "Enter color:" << endl;
    if(!(cin >> color))
        return 1;
    return 0;
}