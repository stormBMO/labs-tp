#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "utils.h"
#include "adfs.h"

using namespace std;

int main(){
     int size, iIndex, jIndex, color;
     cout << "Enter size of Matrix:" << endl;
     cin >> size;
     //main image (matrix of pixels [0 - 255])
     vector<vector<pair<int, int>>> mainMatrix(size, vector<pair<int,int>> (size, {0,0})); 
     if(MatrixInput(mainMatrix))
          return 0;
     if(InputData(iIndex, jIndex, color))
          return 0;
     DFS(iIndex, jIndex, mainMatrix, color);
     MatrixOutput(mainMatrix);
     return 0;
}
