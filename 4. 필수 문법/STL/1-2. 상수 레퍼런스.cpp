#include <iostream>

using namespace std;

// call by reference은 참조값을 이용해서 함수 내에서 변수를 바꾸면 main함수에서도 바뀜.
void modify(int &value){
    value = 10;
    cout << "주소 " << &value << endl;
    cout << "값 " << value << endl;
}

int main(){
    int value = 5;
    cout << "주소 " << &value << endl;
    cout << "값 " << value << endl;
    modify(value);
    cout << "값 " << value << endl;

    return 0;
}