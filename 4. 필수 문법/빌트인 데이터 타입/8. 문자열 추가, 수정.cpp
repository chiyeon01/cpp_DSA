#include<iostream>
#include<string>

using namespace std;

int main() {
    string str = "APPLE";

    // 문자열 추가
    str += ", World!"; 
    cout << str << endl;

    // 문자열 수정
    str[7] = 'P'; // 7번째 문자 W -> P로 수정
    cout << str << endl;

    // replace()
    str.replace(7, 4, "Col"); // 7번째 문자부터 'Col'로 변경
    cout << str << endl;

    return 0;
}