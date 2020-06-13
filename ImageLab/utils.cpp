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
int MatrixInput(vector<vector<pair<int, int>>>& matrix){
    cout << "Enter matrix ([0-255] values only):" << endl;
    for (size_t i = 0; i < matrix.size(); ++i)
        for (size_t j = 0; j < matrix.size(); ++j){
            if(!(cin >> matrix[i][j].first))
                return 1;
            if(matrix[i][j].first < 0 || matrix[i][j].first > 255)
                return 1;
            matrix[i][j].second = 0;
        }
    return 0;
}

//Output matrix
//Takes a matrix as an argument (vector<vector<pair<int, int>>>)
int MatrixOutput(const vector<vector<pair<int, int>>>& matrix){
    for (int i = 0; i < matrix.size(); ++i){
        for (int j = 0; j < matrix.size(); ++j){
            cout << matrix[i][j].first << " ";
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