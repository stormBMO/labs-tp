#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;


int DFS(const int& start, vector<vector<pair<int, int>>>& matrix, const int& color){
    stack<pair<int,int>> s;
    s.push({start, 0});
    while (!s.empty()) {
        int v = s.top().first;
        s.pop();
        for (int i = 0; i < matrix[v].size()*matrix[v].size(); ++i){
            if (matrix[v][i].second == 0){
                s.push(matrix[v][i]);
                matrix[v][i].second = 1;
                matrix[v][i].first = color;
            }
        }
    }
    return 0;
}