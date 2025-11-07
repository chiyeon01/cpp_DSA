#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    vec[2] = 10;

    cout << vec[2] << endl;
    return 0;
}