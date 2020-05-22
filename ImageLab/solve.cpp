#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;


int DFS(const int& start, vector<vector<int>> matrix, const int& color){
    stack<int> s;
    vector<int> mark(matrix[0].size(), 0);
    s.push(start);
    while (!s.empty()) {
        int v = s.top();
        s.pop();
        for (int i = 0; i < matrix[v].size(); ++i){
            if (mark[matrix[v][i]] == 0 && matrix[v][i] == start){
                s.push(matrix[v][i]);
                mark[matrix[v][i]] = 1;
                matrix[v][i] = color;
            }
        }
    }
    return 0;
}