#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <set>
#include <map>
#include <algorithm>
#include "utils.h"
#include "solve.h"
#define INF 1000 //its better to use INT32_MAX

using namespace std;

int main(){
    int vertrexesAmount;
    cout << "Enter amount of vertexes:" << endl;
    cin >> vertrexesAmount;
    vector<vector<int>> matrix (vertrexesAmount, vector<int> (vertrexesAmount, INF));
    MatrixInput(matrix);
    FloydAlgorithm(matrix);
    cout << FindMinInMax(matrix) << endl;
    return 1;
} 