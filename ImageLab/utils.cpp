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
    for (size_t i = 0; i < matrix.size(); ++i)
        for (size_t j = 0; j < matrix.size(); ++j){
            cin >> matrix[i][j].first;
            matrix[i][j].second = 0;
        }
    return 0;
}

//Output matrix
//Takes a matrix as an argument (vector<vector<pair<int, int>>>)
int MatrixOutput(const vector<vector<pair<int, int>>>& matrix){
    cout << matrix.size() << endl;
    for (int i = 0; i < matrix.size(); ++i){
        for (int j = 0; j < matrix.size(); ++j){
            cout << matrix[i][j].first << " ";
        }
        cout << endl;
    }
    return 0;
}