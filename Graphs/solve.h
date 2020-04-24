#pragma once
#include <vector>
using namespace std;

//Floyd-Warshall algorithm
//This is an algorithm that helps you find shortest
//paths in a weighted graph with positive or negative edge weights
//It has o(v^3) perfomance
//Takes a matrix as an argument (vector<vector<int>>)
//Resource: https://en.wikipedia.org/wiki/Floyd%E2%80%93Warshall_algorithm 
int FloydAlgorithm(vector<vector<int>>& matrix);

//Function that returns an int value equal 
//to the vertex index with a smaller maximum path value
int FindMinInMax(const vector<vector<int>>& matrix);