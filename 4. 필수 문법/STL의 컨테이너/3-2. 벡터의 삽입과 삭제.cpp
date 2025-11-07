#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // 맨 앞에 원소 삽입
    v.insert(v.begin(), 1);

    // 맨 앞의 원소 삭제
    v.erase(v.begin());
    return 0;
}