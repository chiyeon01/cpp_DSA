#include <iostream>

using namespace std;

int main() {
    int intArray[3] = {1, 2, 3};
    double doubleArray[3] = {1.1, 2.2, 3.3};
    char charArray[3] = {'a', 'b', 'c'};

    // int 배열의 주소값
    cout << "int 배열의 주소값" << endl << endl;
    cout << &intArray[0] << endl;
    cout << &intArray[1] << endl;
    cout << &intArray[2] << endl;
    cout << endl;

    // double 배열의 주소값
    cout << "double 배열의 주소값" << endl << endl;
    cout << &doubleArray[0] << endl;
    cout << &doubleArray[1] << endl;
    cout << &doubleArray[2] << endl;
    cout << endl;

    // char 배열의 주소값
    cout << "char 배열의 주소값" << endl << endl;
    cout << &charArray[0] << endl;
    cout << &charArray[1] << endl;
    cout << &charArray[2] << endl;
    cout << endl;

    return 0;
}