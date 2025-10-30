#include <iostream>

using namespace std;

int main() {
    // 형 변환
    int i = 65;
    float f = 5.2f;

    // 암시적 형 변환(메모리가 큰 float으로 변환됨)
    double d = i + f;
    cout << d << endl;
    // 명시적 형 변환 double -> int
    cout << static_cast<int>(d) << endl;
    // 명시적 형 변환 int -> char
    cout << static_cast<char>(i) << endl;
    
    return 0;
}