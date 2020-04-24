//Find center of directed gragh
//Andrey Chetvertkov IVT 13-BO
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
    //(it is nessery for Floyd Algorithm)
    //i`ve called in main, because we will use only it
    vector<vector<int>> mainMatrix (verticesAmount, vector<int> (verticesAmount, INF));
    //initializating adjacency matrix
    MatrixInput(mainMatrix);
    MatrixOutput(mainMatrix);
    //using Floyd-Warshall algorithm to find shortest paths between vertices
    FloydAlgorithm(mainMatrix);
    //outputing result
    cout << "Answer is: Vertex " << FindMinInMax(mainMatrix) << endl;
    return 1;
} 