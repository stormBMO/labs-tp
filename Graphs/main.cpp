#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <set>
#include <map>
#include <algorithm>
#include "utils.h"
#include "solve.h"

using namespace std;

int main(int argc, char** args){
    vector<vector<int>> matrix;
    MatrixInput(matrix);
    //MatrixOutput(matrix);
    MatrixMirorring(matrix);
    DijkstraAlgorithm(matrix);
    //MatrixOutput(matrix);
    return 1;
}