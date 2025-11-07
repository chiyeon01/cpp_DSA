#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    std::vector<int> v = {4, 2, 5, 3, 1};

    // 오름차순 정렬
    sort(v.begin(), v.end());

    for(int a: v) {
        cout << a << " ";
    }
    cout << endl;

    // 내림차순 정렬
    sort(v.rbegin(), v.rend());

    for(int a: v) {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}