#include <iostream>

using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};

    // {1, 2, 0, 0, 0}
    int arr2[5] = {1, 2};

    // {0, 0, 0, 0, 0}
    int arr3[5] = {};

    // {gb, gb, gb, gb, gb} => 쓰레기 값으로 채워짐.
    int arr4[5];

    return 0;
}