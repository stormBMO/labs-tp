#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "utils.h"
#include "solve.h"
#include "stack.h"

using namespace std;

int main(){
     int size, iIndex, jIndex, color;
     //cout << "Enter size of Matrix:" << endl;
     //cin >> size;
     //main image (matrix of pixels [0 - 255])
     vector<vector<pair<int, int>>> mainMatrix(size, vector<pair<int,int>> (size, {0,0})); 
     //if(MatrixInput(mainMatrix))
          //return 0;
     //if(InputData(iIndex, jIndex, color))
          //return 0;
     //DFS(iIndex, jIndex, mainMatrix, color);
     Stack <int> lol;
     lol.push (1);
     lol.push (2);
     for(int i = 0; i < 2; ++i){
          cout << "lol" << lol.pop() << endl;
     }
     //MatrixOutput(mainMatrix);
     return 0;
}
