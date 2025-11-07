#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {1, 4, 3, 3, 5, 3, 4};

    // 3이라는 값이 v에 몇 번 나타나는지 세기
    int rec = count(v.begin(), v.end(), 3);

    cout << rec << endl;
    
    return 0;
}