#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "utils.h"

using namespace std;

int main(){
     int size;
     cout << "Enter size of Matrix:" << endl;
     cin >> size;
     //main image (matrix of pixels [0 - 255])
     vector<vector<pair<int, int>>> mainMatrix(size, vector<pair<int,int>> (size, {0,0})); 
     MatrixOutput(mainMatrix);
     MatrixInput(mainMatrix);
     MatrixOutput(mainMatrix);
     return 0;
}
