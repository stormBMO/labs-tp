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

int FloydAlgorithm(vector<vector<int>>& matrix){
    for (int k=0; k<matrix.size(); ++k)
	    for (int i=0; i<matrix.size(); ++i)
		    for (int j=0; j<matrix.size(); ++j)
				    if (matrix[i][k] < INF && matrix[k][j] < INF)
                        matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
    return 0;
}

int FindMinInMax(const vector<vector<int>>& matrix){

    int max = -1, min = INF, idxMin = 0, idxMax = 0;
    for (int i = 0; i < matrix.size(); ++i){
        for (int j = 0; j < matrix.size(); ++j)
            if(matrix[j][i] > max){
                max = matrix[j][i];
                idxMax = i;
            }
        if (max < min){
            idxMin = idxMax;
            min = max;
        }
        max = -1;
    }

    return idxMin;
}