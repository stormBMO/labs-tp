#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "utils.h"

using namespace std;

int main(){
     vector<vector<int>> mainMatrix; //main image (matrix of pixels [0 - 255])
     MatrixInput(mainMatrix);
     MatrixOutput(mainMatrix);
     return 0;
}
