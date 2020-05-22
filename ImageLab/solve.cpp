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
        pair<int, int> v = s.top();
        s.pop();
        for (int i = 0; i < matrix[v.first].size(); ++i){
            if (matrix[v.first][i].second == 0 && matrix[v.first][i].first == start){
                s.push(matrix[v.first][i]);
                matrix[v.first][i].second = 1;
                matrix[v.first][i].first = color;
            }
        }
    }
    return 0;
}