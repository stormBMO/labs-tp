#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <set>
#include <map>
#include <algorithm>
#include "utils.h"

#define INF 1000 //its better to use INT32_MAX

using namespace std;

//Initializating adjacency matrix
//Takes a matrix as an argument (vector<vector<int>>)
int MatrixInput(vector<vector<int>>& matrix){
    int distance, edgesAmout, from, to;
    //init main diagonal with 0
    for(int i = 0; i < matrix.size(); ++i)
        matrix[i][i] = 0;
    cout << "Enter amount of edges:" << endl;
    cin >> edgesAmout;
    cout << "Enter " << edgesAmout <<" edge(s): form -> to: distance" << endl;
    for(int i = 0; i < edgesAmout; ++i){
        cin >> from >> to >> distance;
        matrix[from][to] = distance;
    }
    return 0;
}

//Output matrix
//Takes a matrix as an argument (vector<vector<int>>)
int MatrixOutput(const vector<vector<int>>& matrix){
    cout << matrix.size() << endl;
    for (int i = 0; i < matrix.size(); ++i){
        for (int j = 0; j < matrix.size(); ++j){
            //if value equals INF that means that there is no
            //path  between i and j verteces
            cout << (matrix[i][j] == INF ? 0 : matrix[i][j]) << " ";
        }
        cout << endl;
    }
    return 0;
}