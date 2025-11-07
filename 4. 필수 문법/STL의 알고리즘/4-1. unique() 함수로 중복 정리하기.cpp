#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {1, 1, 1, 2, 2, 2, 3, 4, 4, 5, 5};

    auto newEnd = unique(vec.begin(), vec.end());

    for (auto i = vec.begin(); i < newEnd; i++) {
        cout << *i << " ";
    }
    cout << endl;

    for (auto v: vec) {
        cout << v << " ";
    }
    cout << endl;
    
    return 0;
}