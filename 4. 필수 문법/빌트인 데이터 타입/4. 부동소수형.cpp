#include <iostream>

using namespace std;

int main() {
    // 부동소수형
    double d = 2.5;
    float f = 1.5f;

    cout << sizeof(d) << endl;
    cout << sizeof(f) << endl;
    cout << d << " " << f << endl;
    cout << d + f << endl;
    cout << d - f << endl;
    cout << d * f << endl;
    cout << d / f << endl;
    
    return 0;
}