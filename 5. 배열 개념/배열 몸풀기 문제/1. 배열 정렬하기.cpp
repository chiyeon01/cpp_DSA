#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

// solution
vector<int> solution(vector<int> vec) {
    sort(vec.begin(), vec.end());

    return vec;
}

int main() {
    vector<int> testVec = {3, 2, 1, 4, 7};
    vector<int> vec = solution(testVec);

    for (int v: vec) {
        cout << v << " ";
    }
    
    return 0;
}