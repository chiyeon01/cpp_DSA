#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int row = arr1.size();
    int col = arr2[0].size();
    int mulN = 0;
    vector<vector<int>> answer(row, vector<int>(col));
    
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            mulN = 0;
            for (int i = 0; i < arr2.size(); i++) {
                mulN += arr1[r][i] * arr2[i][c];
            }
            answer[r][c] = mulN;
        }
    }
    
    return answer;
}