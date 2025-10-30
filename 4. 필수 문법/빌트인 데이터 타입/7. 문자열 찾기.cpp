#include<iostream>
#include<string>

using namespace std;

int main() {
    // 문자열 초기화
    string str = "Hello, C++ World!";

    // "Hello 문자열 찾기"
    size_t pos1 = str.find("Hello");
    cout << pos1 << endl;

    // 'C' 문자 찾기
    size_t pos2 = str.find('C');
    cout << pos2 << endl;

    // "Hello" 문자열 찾기, 시작 인덱스 지정 -> string::npos
    size_t start_index = 2;
    size_t pos3 = str.find("Hello", start_index);
    cout << pos3 << endl;
    
    // 존재하지 않는 문자열 찾기 -> string::npos
    size_t pos4 = str.find("Python");
    cout << pos4 << endl;

    return 0;
}