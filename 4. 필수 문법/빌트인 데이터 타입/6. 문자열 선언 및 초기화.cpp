#include<iostream>
#include<string>

using namespace std;

int main() {
    string str1;
    string str2 = "Hello, World!";
    string str3(str2); // 문자열 복사
    string str4(str2, 0, 5); // 문자열 부분 복사 초기화
    string str5(10, '*'); // 반복된 문자열로 초기화 / "**********"

    cout << str2 << endl;
    cout << str3 << endl;
    cout << str4 << endl;
    cout << str5 << endl;

    return 0;
}