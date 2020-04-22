#include <iostream>
#include <vector>
#include "utils.h"

#define INF 1000; //its better to use INT32_MAX

using namespace std;

int MatrixInput(vector<vector<int>>& matrix){
    int tempDistance, amountOfVertexes;
    cout << "Input amount of vertexs" << endl;
    cin >> amountOfVertexes;
    matrix.resize(amountOfVertexes);
    for(int i = 0; i < amountOfVertexes; ++i) {
        matrix[i].resize(amountOfVertexes);
        for (int j = i+1; j < amountOfVertexes; ++j) {
            cout << "Are " << i << " and "<< j << " connected? "
            "If they are, which distance is it? (0 means \"not connected\")" << endl; 
            if(!(cin >> tempDistance))
                return 0;
            matrix[i][j] = tempDistance;
        }
    }
    return 0;
}

int MatrixMirorring(vector<vector<int>>& matrix){
    for (int i=0; i<matrix.size(); i++)
        for (int j=i; j < matrix.size(); j++)
            matrix[j][i] = matrix[i][j];
    return 0;
}

int MatrixInit(vector<vector<int>>& matrix){
    for(int i = 0; i < matrix.size(); ++i){
        matrix[i].resize(matrix.size());
        for(int j = 0; j < matrix.size();++j)
            matrix[i][j] = INF;
    }
    matrix[0][0] = 0;
    return 0;
}

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