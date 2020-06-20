#pragma once

#include <vector>
#include <stack>
#include "stack.h"

using namespace std;

//Add vector`s values to stack(if possible)
//Takes int, int, Stack(Stack <pair<int,int>>) and matrix(vector<vector<pair<int, int>>>)
//as an argument
int AddToStack(const int& cur, const int& idx, Stack <pair<int,int>>& sDFS,
                            const vector<vector<pair<int, int>>>& matrix);

//Non-recurcion Depth-first search algorithm
//Takes start position (pair<int, int>) & matrix (vector<vector<pair<int, int>>>)
int DFS(const int& iStart, const int& jStart, vector<vector<pair<int, int>>>& matrix, const int& color);
