#include <vector>

using namespace std;

//Non-recurcion Depth-first search algorithm
//Takes start position (pair<int, int>) & matrix (vector<vector<pair<int, int>>>)
int DFS(const int& start, vector<vector<pair<int, int>>>& matrix, const int& color);