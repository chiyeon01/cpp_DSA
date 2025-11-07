#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// solution
vector<int> solution(vector<int> vec) {
    vector<int> solVec;
    sort(vec.rbegin(), vec.rend());
    
    int NowNumber = vec[0];
    solVec.push_back(NowNumber);

    for (int v: vec) {
        if (v != NowNumber) {
            NowNumber = v;
            solVec.push_back(NowNumber);
        }
    }

    return solVec;
}

int main() {
    vector<int> testVec = {4, 4, 5, 1, 2, 1, 2, 2, 3};
    vector<int> vec = solution(testVec);
    
    for (int v: vec) {
        cout << v << " ";
    }

    return 0;
}