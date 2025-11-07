#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    // 모든 가능한 순열 출력
    do {
        for (auto i: v) {
            cout << i << " ";
        }
        cout << endl;
    } while(next_permutation(v.begin(), v.end()));

    return 0;
}