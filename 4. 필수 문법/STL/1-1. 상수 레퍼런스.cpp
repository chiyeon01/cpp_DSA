#include<iostream>

using namespace std;

//call by value방식은 함수에 인자가 들어갈 때는 복사본으로 들어가므로 실제 main함수의 변수에는 영향을 끼치지 못함.
void modify(int value){
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