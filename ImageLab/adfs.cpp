#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "stack.h"

using namespace std;

int AddToStack(const int& cur, const int& idx, Stack <pair<int,int>>& sDFS,
                            const vector<vector<pair<int, int>>>& matrix){
    if(cur - 1 >= 0)
        sDFS.push({cur - 1,idx});
    if(cur + 1 < matrix[0].size())
        sDFS.push({cur + 1, idx});
    if(idx - 1 >= 0)
        sDFS.push({cur, idx - 1});
    if(idx + 1 < matrix[0].size())
        sDFS.push({cur, idx + 1});
    return 0;
}

int DFS(const int& iStart, const int& jStart, vector<vector<pair<int, int>>>& matrix, const int& color){
    Stack <pair<int,int>> sDFS;
    int saveValue = matrix[iStart][jStart].first;
    sDFS.push({iStart, jStart});
    while (!sDFS.isEmpty()){
        pair<int, int> current = sDFS.topElement();
        sDFS.pop();
        if (matrix[current.first][current.second].second == 0 
        && matrix[current.first][current.second].first == saveValue){
            AddToStack(current.first, current.second, sDFS, matrix);
            matrix[current.first][current.second].second = 1;
            matrix[current.first][current.second].first = color;
        }
    }
    return 0; 
}
