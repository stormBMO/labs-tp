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
//Takes a matrix as an argument (vector<vector<int>>)
int MatrixInput(vector<vector<int>>& matrix){
    
    return 0;
}

//Output matrix
//Takes a matrix as an argument (vector<vector<int>>)
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