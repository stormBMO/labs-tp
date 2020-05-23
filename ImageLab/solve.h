#include <vector>
#include <stack>

using namespace std;

int AddToStack(const int& cur, const int& idx, stack<pair<int,int>>& sDFS,
                            const vector<vector<pair<int, int>>>& matrix);

//Non-recurcion Depth-first search algorithm
//Takes start position (pair<int, int>) & matrix (vector<vector<pair<int, int>>>)
int DFS(const int& iStart, const int& jStart, vector<vector<pair<int, int>>>& matrix, const int& color);
