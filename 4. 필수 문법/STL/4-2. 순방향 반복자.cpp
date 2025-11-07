#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> myMap = {{"apple", 1}, {"banana", 2}, {"cherry", 3}};

    // 순회 및 출력
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    // 원소 탐색
    auto result = myMap.find("banana");
    if (result != myMap.end()) {
        cout << "Found: " << result->first << " -> " << result->second << endl;
    } else {
        cout << "Not found" << endl;
    }
    
    return 0;
}