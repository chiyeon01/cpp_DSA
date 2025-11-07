#include<iostream>
#include<vector>
#include<map>
#include<set>

using namespace std;

int main(){
    // vector 예
    vector<int> vec = {1, 2, 3, 4, 5};
    
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    // map 예
    map<string, int> fruitMap = {{"apple", 1}, {"banana", 2}, {"cherry", 3}};

    for (const auto& pair : fruitMap) {
        cout << pair.first << "=" << pair.second << " ";
    }
    cout << endl;

    // set 예
    set<string> fruitSet = {"apple", "banana", "cherry"};

    for (const auto& fruit: fruitSet) {
        cout << fruit << " ";
    }

    cout << endl;

    return 0;
}