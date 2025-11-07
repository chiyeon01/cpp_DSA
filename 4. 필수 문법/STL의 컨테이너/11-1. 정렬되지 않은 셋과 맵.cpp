#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    // 정렬되지 않은 set
    unordered_set<int> myUnorderedSet;

    // 삽입
    myUnorderedSet.insert(3);
    myUnorderedSet.insert(1);
    myUnorderedSet.insert(4);
    myUnorderedSet.insert(2);

    for (int num: myUnorderedSet) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}