#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    // 정렬되지 않은 맵 선언
    unordered_map<string, int> myUnorderedMap;

    // 삽입
    myUnorderedMap["apple"] = 3;
    myUnorderedMap["banana"] = 1;
    myUnorderedMap["cherry"] = 4;
    myUnorderedMap["date"] = 2;

    for (const auto& pair: myUnorderedMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
    cout << endl;

    return 0;
}