#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <set>
#include <map>
#include <algorithm>
#include "utils.h"

const bool EXIT_SUCCESSED = 0;
const bool EXIT_FAILED = 1;

using namespace std;

//Initializating image`s matrix
//Takes a matrix as an argument (vector<vector<pair<int, int>>>)
bool MatrixInput(vector<vector<pair<int, int>>>& matrix){
    cout << "Enter matrix ([0-255] values only):" << endl;
    for (size_t i = 0; i < matrix.size(); ++i)
        for (size_t j = 0; j < matrix.size(); ++j){
            if(!(cin >> matrix[i][j].first))
                return EXIT_FAILED;
            if(matrix[i][j].first < 0 || matrix[i][j].first > 255)
                return EXIT_FAILED;
            matrix[i][j].second = 0;
        }
    return EXIT_SUCCESSED;
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

//Input for this specify task
//Takes 3 int as an argument
bool InputData(int& iIndex, int& jIndex, int& color){
    cout << "Enter i:" << endl;
    if(!(cin >> iIndex))
        return EXIT_FAILED;
    cout << "Enter j:" << endl;
    if(!(cin >> jIndex))
        return EXIT_FAILED;
    cout << "Enter color:" << endl;
    if(!(cin >> color) || color > 255 || color < 0)
        return EXIT_FAILED;
    return EXIT_SUCCESSED;
}