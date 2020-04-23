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
    int verticesAmount;
    cout << "Enter amount of vertices:" << endl;
    cin >> verticesAmount;
    //creating matrix of adjacency matrix and filling out it with INF
    vector<vector<int>> mainMatrix (verticesAmount, vector<int> (verticesAmount, INF));
    //initializating adjacency matrix
    MatrixInput(mainMatrix);
    //using Floyd-Warshall algorithm to find shortest paths between vertices
    FloydAlgorithm(mainMatrix);
    //outputing result
    cout << FindMinInMax(mainMatrix) << endl;
    return 1;
} 