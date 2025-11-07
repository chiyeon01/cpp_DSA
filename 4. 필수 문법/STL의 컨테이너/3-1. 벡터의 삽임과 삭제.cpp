#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> v = {2, 3, 4, 5};

    // 맨 뒤에 원소 삽입
    v.push_back(6);

    // 맨 뒤에 원소 삭제
    v.pop_back();

    return 0;
}