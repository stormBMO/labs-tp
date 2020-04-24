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


//Floyd-Warshall algorithm
//This is an algorithm that helps you find shortest
//paths in a weighted graph with positive or negative edge weights
//It has o(v^3) perfomance
//Takes a matrix as an argument (vector<vector<int>>)
//Resource: https://en.wikipedia.org/wiki/Floyd%E2%80%93Warshall_algorithm 
int FloydAlgorithm(vector<vector<int>>& matrix){
    for (int k = 0; k < matrix.size(); ++k)
	    for (int i = 0; i < matrix.size(); ++i)
		    for (int j = 0; j < matrix.size(); ++j)
                    //shouldn`t be greater than INF
				    if (matrix[i][k] < INF && matrix[k][j] < INF)
                        //peak the lowest path between direct path
                        //and path that goes through 'k' vertex
                        matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
    return 0;
}


//Function that returns an int value equal 
//to the vertex index with a smaller maximum path value
int FindMinInMax(const vector<vector<int>>& matrix){
    int max = -1, min = INF, idxMin = 0, idxMax = 0;
    for (int i = 0; i < matrix.size(); ++i){
        for (int j = 0; j < matrix.size(); ++j)
            //if [i][j] greater set new max and idxMax
            if(matrix[j][i] > max){
                max = matrix[j][i];
                idxMax = i;
            }
        //if min greater than max set new min and idxMin
        if (max < min){
            idxMin = idxMax;
            min = max;
        }
        //reset max
        max = -1;
    }
    //return index with a smaller maximum path value
    return idxMin;
}