#include<iostream>
#include<vector>
#include<map>
#include<string>

using namespace std;

int main(){
    auto num = 42; // 자동으로 int형 추론
    cout << num << endl;

    auto pi = 3.14; // 자동으로 double형 추론
    cout << pi << endl;

    auto greeting = string("Hello, World"); // 자동으로 string형 추론
    cout << greeting << endl;
    return 0;
}