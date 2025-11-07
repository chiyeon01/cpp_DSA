#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {1, 3, 5, 7, 2, 4, 6};

    auto maxIt = max_element(vec.begin(), vec.end());
    auto minIt = min_element(vec.begin(), vec.end());

    cout << *maxIt << endl;
    cout << *minIt << endl;
}