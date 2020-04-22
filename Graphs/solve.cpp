#include <vector>
#include "utils.h"
#define INF 1000; //its better to use INT32_MAX

using namespace std;

int DijkstraAlgorithm(const vector<vector<int>>& matrix){
    vector<int> maxOfMinDistance(matrix.size()); 
    vector<vector<int>> matrixOfMinDistance(matrix.size());
    MatrixInit(matrixOfMinDistance);
    MatrixOutput(matrixOfMinDistance);
    for (int i = 0; i < matrix.size(); ++i){
        matrixOfMinDistance[i].resize(matrix.size());
        for(int j = 0; j < matrix.size(); ++j){

        }
    }
    return 0;
}