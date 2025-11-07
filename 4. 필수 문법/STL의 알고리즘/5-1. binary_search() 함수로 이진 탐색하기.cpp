#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    // 존재하면 true
    cout << binary_search(vec.begin(), vec.end(), 3) << endl;
    
    // 존재하지 않으면 false
    cout << binary_search(vec.begin(), vec.end(), 6) << endl;

    return 0;
}