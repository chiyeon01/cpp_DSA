#include <iostream>

using namespace std;

// 두 수를 더하는 함수
int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a = 5;
    int b = 10;

    // 결과 출력
    cout << add(a, b) << endl;

    return 0;
}