#include<iostream>
#include<set>

using namespace std;

int main() {
    set<int> s = {1, 3, 2, 1, 5};

    s.insert(4);

    s.erase(2);
    auto it = s.find(4);

    if (it != s.end()) {
        s.erase(it);
    }
    
    return 0;
}